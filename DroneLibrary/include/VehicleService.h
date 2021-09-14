#ifndef _VEHICLE_SERVICE_H
#define _VEHICLE_SERVICE_H

#include "EscService.h"
#include <iostream>
using namespace std;

class VehicleService
{
private:
    string _name;
    EscService _escService();

public:
    VehicleService(string name);
    ~VehicleService();
};

#endif
