#include "Vehicle.h"

Vehicle::Vehicle(string name, list<Esc> thrusters)
{
    _name = name;
    _thrusters = thrusters;
}

Vehicle::~Vehicle() {}
