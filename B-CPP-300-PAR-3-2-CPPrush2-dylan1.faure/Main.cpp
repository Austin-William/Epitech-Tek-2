/*
** EPITECH PROJECT, 2021
** main.cpp
** File description:
** main.cpp
*/

#include "Object.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Toy.hpp"
#include "Wrap.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "ConveyorBelt.hpp"

Object **MyUnitTests()
{
    Object **UnitTest = new Object*;

    UnitTest[0] = new LittlePony("Little pony in the forest who will be dead in five second");
    UnitTest[1] = new Teddy("Teddy the best");

    return (UnitTest);
}

Object *MyUnitTests(Object **object)
{
    Teddy* teddy = (Teddy *)(object[0]);
    Box* box = (Box *)(object[1]);
    GiftPaper* gp = (GiftPaper *)(object[2]);

    if (!object) {
        std::cerr << "The array is empty. Write something !" << std::endl;
        return (NULL);
    } else if (!teddy) {
        std::cerr << "No teddy bear, good luck" << std::endl;
        return (NULL);
    } else if (!box) {
        std::cerr << "Do you need a box ?" << std::endl;
        return (NULL);
    } else if (!gp) {
        std::cerr << "Maybe is it better with a giftpaper ?" << std::endl;
        return (NULL);
    }
    box->openWrap();
    box->wrapMeThat(teddy);
    gp->wrapMeThat(box);
    teddy->isTaken();
    return (object[2]);
}

void display_1(Object **Test)
{
    std::cout << "-----------------Test Rush 2 : Little Pony and Teddy--------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "Test Poney Type : " << Test[0]->getTypeToy() << std::endl;
    std::cout << "Test Poney Name : " << Test[0]->getName() << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "Test Teddy : " << Test[1]->getTypeToy() << std::endl;
    std::cout << "Test Teddy : " << Test[1]->getName() << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;
    std::cout << "End Test Little Pony and Teddy" << std::endl;
    std::cout << std::endl;
}

void display_2(Object *Gift)
{
    std::cout << "-----------------Test Rush 2 : A Box Story--------------------" << std::endl;
    GiftPaper *gp = (GiftPaper*)(Gift);
    Teddy *teddy;

    std::cout << std::endl;
    if (!Gift) {
        std::cerr << "Gift ?" << std::endl;
        return;
    }
    std::cout << "##### Giftpaper process ######" << std::endl;
    std::cout << "Test Gift Name : " << gp->getName() << std::endl;
    std::cout << std::endl;
    std::cout << "##### Opening box process ######" << std::endl;
    Box *box = (Box*)(gp->takeWrap());
    std::cout << "Test Box Name : " << box->getName() << std::endl;
    box->openWrap();
    std::cout << std::endl;
    std::cout << "##### Teddy process ######" << std::endl;
    teddy = (Teddy*)(gp->takeWrap());
    std::cout << std::endl;
    std::cout << "End Test A Box Story" << std::endl;
    std::cout << std::endl;
}

void display_3(Box *box)
{
    PapaXmasConveyorBelt *conveyor = new PapaXmasConveyorBelt("Big conveyor of the death", "GiftPaper premium pro ++");

    std::cout << std::endl;
    std::cout << "##### Conveyor TEST #####" << std::endl;
    std::cout << "Conveyor object Name / Title = " << conveyor->getTitle() << " / " << conveyor->getTypeWrap() << std::endl;
    std::cout << "Box box Name / Title = " << box->getName() << " / " << box->getTypeToy() << std::endl;
    std::cout << std::endl;
    std::cout << "Conveyor object Name / Title = " << conveyor->getTitle() << " / " << conveyor->getTypeWrap() << std::endl;
}

int main()
{
    Object **Test = MyUnitTests();
    Object *o[3] = {
        new Teddy("Five night with this horrible thing"),
        new Box("Amazon Box"),
        new GiftPaper("Giftpaper Premium")
    };
    Object *Gift = MyUnitTests(o);
    Box *box = new Box("Amazon Box");

    display_1(Test);
    display_2(Gift);
    display_3(box);

    return (0);
}