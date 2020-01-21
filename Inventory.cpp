//
//  Inventory.cpp
//  gameStore
//
//  Created by Jasdip Sekhon on 9/12/19.
//  Copyright © 2019 Jasdip Sekhon. All rights reserved.
//

#include <list>
#include "Fps.h"
#include "Inventory.h"
using namespace std;

Inventory::Inventory()
{
}

void Inventory::addFps(string serialNumber, double price, string name, string company)
{
    Fps *fps = new Fps(serialNumber, price, name, company);
    fpsGames.push_back(fps);
}


Fps *Inventory:: getGame(string serialNumber)
{
    list<Fps *>::iterator it;
    
    for (it = fpsGames.begin(); it != fpsGames.end(); it++)
    {
        Fps *fps = *it;
        if (fps->getSerialNumber() == serialNumber)
        {
            return fps;
        }
    }
    return nullptr;
}

Fps *Inventory:: search(Fps *searchGame)
{
    // iterate thru doubly linked list to find match
    list<Fps *>::iterator it;
    for (it = fpsGames.begin(); it != fpsGames.end(); it++)
    {
        Fps *fps = *it;
        
        // price and serial number are unique, so no need to search for them
        string name = searchGame->getName();
        if (name != fps->getName())
        {
            continue;
        }
        
        string company = searchGame->getCompany();
        if (company != fps->getCompany())
        {
            continue;
        }
        return *it;
    }
    return nullptr;
}












