#ifndef _DRONE_H
#define _DRONE_H

#include <iostream>
using namespace std;

class Drone
{
private:
    string Name;
    list<Esc> Thrusters;
public:
    Drone(string name, list<Esc> thrusters);
    ~Drone();
};


#endif