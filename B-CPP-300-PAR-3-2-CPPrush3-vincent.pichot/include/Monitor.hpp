/*
** EPITECH PROJECT, 2021
** monitor
** File description:
** monitor
*/

#include <string>
#include <iostream>
#include <vector>

#include "IMonitorDisplay.hpp"

const int NUM_CPU_STATES = 10;

enum CPUStates
{
	S_USER = 0,
	S_NICE,
	S_SYSTEM,
	S_IDLE,
	S_IOWAIT,
	S_IRQ,
	S_SOFTIRQ,
	S_STEAL,
	S_GUEST,
	S_GUEST_NICE
};

typedef struct CPUData
{
	std::string cpu;
	size_t times[NUM_CPU_STATES];
} CPUData;

void print_graph(sf::RenderWindow *window, int i);
void ReadStatsCPU(std::vector<CPUData> & entries);

size_t GetIdleTime(const CPUData & e);
size_t GetActiveTime(const CPUData & e);

void PrintStats_graph(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2, sf::RenderWindow *window);
void print_stats_ncurs(const std::vector<CPUData> & entries1, const std::vector<CPUData> & entries2);