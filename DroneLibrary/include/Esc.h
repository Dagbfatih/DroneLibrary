#ifndef _ESC_H
#define _ESC_H

#include <Servo.h>

class Esc : Servo
{
private:
public:
    int test;
    Esc();
    ~Esc();
};

#endif