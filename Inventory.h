//
//  Inventory.h
//  gameStore
//
//  Created by Jasdip Sekhon on 9/12/19.
//  Copyright © 2019 Jasdip Sekhon. All rights reserved.
//

#ifndef Inventory_h
#define Inventory_h
#include "Fps.h"
#include <list>
using namespace std;

class Inventory
{
private:
    // doubly linked-list of value type Fps
    list<Fps *> fpsGames;
    
public:
    Inventory();
    void addFps(string serialNumber, double price, string name, string company);
    // Fps return type
    Fps *getGame(string serialNumber);
    // ??
    Fps *search(Fps *searchGame);
    
};
#endif /* Inventory_h */
