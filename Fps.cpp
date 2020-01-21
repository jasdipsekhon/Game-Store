//
//  Fps.cpp
//  gameStore
//
//  Created by Jasdip Sekhon on 9/12/19.
//  Copyright © 2019 Jasdip Sekhon. All rights reserved.
//

#include "Fps.h"
using namespace std;

Fps::Fps(string serialNumber, double price, string name, string company)
{
    this->serialNumber = serialNumber;
    this->price = price;
    this->name = name;
    this->company = company;
}

string Fps::getSerialNumber() const
{
    return serialNumber;
}

double Fps::getPrice() const
{
    return price;
}

void Fps::setPrice(double newPrice)
{
    price = newPrice;
}

string Fps::getName() const
{
    return name;
}
string Fps::getCompany() const
{
    return company;
}
