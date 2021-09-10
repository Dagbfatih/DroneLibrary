#include "Drone.h"
#include "Esc.h"
#include <list>

Drone::Drone(string name, list<Esc> thrusters)
{
    Name = name;
    Thrusters = thrusters;
}

Drone::~Drone()
{
}