#include "EscService.h"

EscService::EscService(...)
{
    va_list argp;
    va_start(argp, 0);
    Esc val = va_arg(argp, Esc);
    val.test = 15;
    std::cout << val.test << std::endl;
    va_end(argp);
}

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
