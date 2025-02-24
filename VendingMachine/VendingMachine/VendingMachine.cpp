#include <iostream>
#include <string>
#include "VendingMachine.h"


    VendingMachine::VendingMachine(){
        Payment = 0; 
    }

    void VendingMachine::insertPayment() {
        Payment += 10;
        std::cout << "Your Balance: Php "<<Payment <<std::endl;
        std::cout << std::endl;

    }
    void VendingMachine::itemList() {
        std::cout << "...Items Available..." << std::endl;
        std::cout << "[1]-Bottled water 12oz....(Php 15)" << std::endl;
        std::cout << std::endl;
    }
    void VendingMachine::selectItem(int itemSelected) {
        if (itemSelected == 1) {
            if ( Payment>= 15) {
                Payment -= 15;
                std::cout << "Enjoy your Water!" << std::endl;
                std::cout << std::endl;
            }
            else {
                std::cout <<"Not enough Balance to pay. your bal. : Php"<< Payment << std::endl;
                std::cout << " your bal. : Php" << Payment << std::endl;

            }
            std::cout << std::endl;

        }
        else {
            std::cout << "Selected Item is not on the list" << std::endl;
            std::cout << std::endl;

        }
        

    }
    void VendingMachine::getchange() {
        if (Payment == 0) {
            std::cout << "You have no change" << std::endl;
            std::cout << "THANK YOU!" << std::endl;
            std::cout << std::endl;

        }
        else {
            std::cout << "Your change: Php"<< Payment << std::endl;
            std::cout << "THANK YOU!" << std::endl;
            std::cout << std::endl;


        }
    }