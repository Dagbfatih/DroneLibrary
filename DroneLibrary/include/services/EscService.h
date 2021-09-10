#ifndef _ESC_SERVICE_H
#define _ESC_SERVICE_H

#include "Esc.h"
#include <list>
using namespace std;

class EscService
{
private:
    list<Esc> thrusters;

public:
    EscService();
    ~EscService();
    virtual void Add(Esc esc) = 0;
    virtual void Remove(Esc esc) = 0;
    virtual void Update(int index, Esc esc) = 0;
    virtual list<Esc> GetAll() = 0;
    virtual Esc Get(int index) = 0;
};

#endif