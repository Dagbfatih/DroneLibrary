#include "EscService.h"

EscService::EscService() {}

void EscService::Add(Esc esc)
{
    thrusters.push_front(esc);
}

void EscService::Remove(Esc esc)
{
    thrusters.remove(esc);
}

void EscService::Update(int index, Esc esc)
{
    list<Esc>::iterator it = thrusters.begin();
    advance(it, index);
    *it = esc;
}

list<Esc> EscService::GetAll()
{
    return thrusters;
}

Esc EscService::Get(int index)
{
    list<Esc>::iterator it = thrusters.begin();
    advance(it, index);
    return *it;
}

EscService::~EscService() {}
