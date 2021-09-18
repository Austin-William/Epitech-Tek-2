/*
** EPITECH PROJECT, 2021
** monitor
** File description:
** source file for monitor
*/

#include <chrono>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>
#include <string>

#include "../include/Monitor.hpp"
#include "../include/IMonitorDisplay.hpp"
#include "Ncurses.hpp"

void print_graph(sf::RenderWindow *window, int i)
{
	std::vector<CPUData> entries1;
	std::vector<CPUData> entries2;

	ReadStatsCPU(entries1);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	ReadStatsCPU(entries2);
	if (i == 1) {
		print_stats_ncurs(entries1, entries2);
	}
	PrintStats_graph(entries1, entries2, window);

	return;
}

void ReadStatsCPU(std::vector<CPUData> & entries)
{
	std::ifstream fileStat("/proc/stat");

	std::string line;

	const std::string STR_CPU("cpu");
	const std::size_t LEN_STR_CPU = STR_CPU.size();
	const std::string STR_TOT("tot");

	while(std::getline(fileStat, line))
	{
		if(!line.compare(0, LEN_STR_CPU, STR_CPU))
		{
			std::istringstream ss(line);

			entries.emplace_back(CPUData());
			CPUData & entry = entries.back();
			ss >> entry.cpu;
			if(entry.cpu.size() > LEN_STR_CPU)
				entry.cpu.erase(0, LEN_STR_CPU);
			else
				entry.cpu = STR_TOT;
			for(int i = 0; i < NUM_CPU_STATES; ++i)
				ss >> entry.times[i];
		}
	}
}

size_t GetIdleTime(const CPUData & e)
{
	return	e.times[S_IDLE] +
			e.times[S_IOWAIT];
}

size_t GetActiveTime(const CPUData & e)
{
	return	e.times[S_USER] + e.times[S_NICE] +
			e.times[S_SYSTEM] +	e.times[S_IRQ] +
			e.times[S_SOFTIRQ] + e.times[S_STEAL] +
			e.times[S_GUEST] + e.times[S_GUEST_NICE];
}

void PrintStats_graph(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2,
						sf::RenderWindow *window)
{
	const size_t NUM_ENTRIES = entries1.size();
	int x = 330;

	for (size_t i = 0; i < NUM_ENTRIES; ++i)
	{
		const CPUData &e1 = entries1[i];
		const CPUData &e2 = entries2[i];

		print_info(window, e1.cpu, 40, x);
		print_info(window, "] ", 70, x);

		const float ACTIVE_TIME = static_cast<float>(GetActiveTime(e2) - GetActiveTime(e1));
		const float IDLE_TIME = static_cast<float>(GetIdleTime(e2) - GetIdleTime(e1));
		const float TOTAL_TIME = ACTIVE_TIME + IDLE_TIME;

		print_info(window, "active: ", 80, x);
		print_info(window, std::to_string(100.f * ACTIVE_TIME / TOTAL_TIME), 170, x);
		print_info(window, "%", 270, x);
		print_info(window, " - idle:", 300, x);
		print_info(window, std::to_string(100.f * IDLE_TIME / TOTAL_TIME), 400, x);
		print_info(window, "%", 510, x);
		x += 25;
	}
}

void print_stats_ncurs(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2)
{
	const size_t NUM_ENTRIES = entries1.size();

	for (size_t i = 0; i < NUM_ENTRIES; ++i)
	{
		const CPUData &e1 = entries1[i];
		const CPUData &e2 = entries2[i];

		char *str = const_cast<char *>(e1.cpu.c_str());
		mvprintw(26 + i, 1, str);
		printw("]");

		const float ACTIVE_TIME = static_cast<float>(GetActiveTime(e2) - GetActiveTime(e1));
		const float IDLE_TIME = static_cast<float>(GetIdleTime(e2) - GetIdleTime(e1));
		const float TOTAL_TIME = ACTIVE_TIME + IDLE_TIME;

		mvprintw(26 + i, 6, "active: ");
		std::string s = std::to_string(100.f * ACTIVE_TIME / TOTAL_TIME);
		char *str1 = const_cast<char *>(s.c_str());
		mvprintw(26 + i, 14, str1);
		mvprintw(26 + i, 24, "%,");
		mvprintw(26 + i, 26, " -idle:");
		std::string s1 = std::to_string(100.f * IDLE_TIME / TOTAL_TIME);
		char *str2 = const_cast<char *>(s1.c_str());
		mvprintw(26 + i, 34, str2);
		mvprintw(26 + i, 45, "%;");
	}
}