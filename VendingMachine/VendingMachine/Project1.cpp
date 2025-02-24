// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "VendingMachine.h"


 
int main()
{
    VendingMachine Vending;
   char userInput;
    int selection;
    do {
        std::cout << "ROI's VENDINGMACHINE" << std::endl;
        std::cout << ".....Options....." << std::endl;
        std::cout << "[i]- For insert Money (Php10)" << std::endl;
        std::cout << "[v]- For view the menu" << std::endl;
        std::cout << "[s]- For selecting item" << std::endl;
        std::cout << "[c]- For getting the change" << std::endl;
        std::cout << std::endl;
        std::cin >> userInput;

        switch (userInput) {
        case'i':
            Vending.insertPayment();
            break;
        case 'v':
            Vending.itemList();
            break;
        case 's':
            std::cout << "...Items Available..." << std::endl;
            std::cout << "[1]-Bottled water 12oz....(Php 15)" << std::endl;

            std::cout << "Enter item number: " << std::endl;

            std::cin >> selection;
            Vending.selectItem(selection);
            break;
        case 'c':
            Vending.getchange();
            return 0;

        default:
            std::cout << "invalid selection. pls try again" << std::endl;
            std::cout << std::endl;

        };
        


    } while (true);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
