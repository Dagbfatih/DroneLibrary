#include <iostream>
#include "Esc.h"
#include "EscService.h"
using namespace std;

int main(void)
{
    EscService escService = EscService(new Esc(), new Esc());
}
