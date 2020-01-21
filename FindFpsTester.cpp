//
//  FindFpsTester.cpp
//  gameStore
//
//  Created by Jasdip Sekhon on 1/20/20.
//  Copyright © 2020 Jasdip Sekhon. All rights reserved.
//

#include <iostream>
#include <string>
#include "FindFpsTester.h"
using namespace std;

void FindFpsTester::initializeInventory(Inventory *inventory)
{
    inventory ->addFps("2489", 24.99, "Halo", "Bungie");
    inventory ->addFps("5102", 59.99, "COD", "Treyarch");
    inventory ->addFps("D3091", 29.95, "Minecraft", "Mojang");
    inventory ->addFps("234fff", 15.00, "Fortnite", "Epic");
    inventory ->addFps("11021", 24.99, "The Witcher 3", "CD Projekt");
}

int main()
{
    Inventory *inventory = new Inventory();
    FindFpsTester::initializeInventory(inventory);
    
    Fps *whatBobWants = new Fps("", 0, "Minecraft", "Mojang");
    
    Fps *fps = inventory->search(whatBobWants);
    if (fps != nullptr)
    {
        cout << "Bob we have a copy in stock of " << fps->getName() << " by " << fps->getCompany() << " for " << fps->getPrice() << "!" << endl;
    }
}
