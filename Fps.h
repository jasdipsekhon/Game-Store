//
//  Fps.h
//  ricksGames
//
//  Created by Jasdip Sekhon on 9/12/19.
//  Copyright © 2019 Jasdip Sekhon. All rights reserved.
//

#ifndef Fps_h
#define Fps_h
#include <string>
using namespace std;

// Fps games genre
class Fps
{
private:
    string serialNumber;
    string name;
    string company;
    double price;
    
public:
    Fps(string serialNumber, double price, string name, string company);
    string getSerialNumber() const;
    double getPrice() const;
    void setPrice(double newPrice);
    string getName() const;
    string getCompany() const;
};

#endif /* Fps_h */
