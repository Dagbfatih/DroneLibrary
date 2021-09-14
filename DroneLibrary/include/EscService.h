#ifndef _ESC_SERVICE_H
#define _ESC_SERVICE_H

#include "Esc.h"
#include <list>
#include <cstdarg>
#include <iostream>
using namespace std;

class EscService
{
private:
    list<Esc> thrusters;

public:
    EscService(...);
    ~EscService();
    virtual void Add(Esc esc);
    virtual void Remove(Esc esc);
    virtual void Update(int index, Esc esc);
    virtual list<Esc> GetAll();
    virtual Esc Get(int index);
};

#endif