#ifndef _VEHICLE_H
#define _VEHICLE_H

#include <iostream>
#include <list>
#include "Esc.h"
using namespace std;

class Vehicle
{
private:
    string _name;
    list<Esc> _thrusters;

public:
    Vehicle(string name, list<Esc> thrusters);
    ~Vehicle();
};

#endif