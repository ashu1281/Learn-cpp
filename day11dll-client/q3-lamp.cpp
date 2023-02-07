#include <iostream>
#include <assert.h>
#include "lamp.h"
using namespace std;



int main() {
    Lamp tableLamp;

    // Following test case checks
    // - If lamp is turned on.
    tableLamp.SwitchOn();
    assert(tableLamp.GetState() == OnState);

    // Following test case checks:
    // - What happens when SwitchOn is called again on
    //   the already switched on table lamp.

    tableLamp.SwitchOn();
    assert(tableLamp.GetState() == OnState);

    // Following test case checks
    // - If lamp is turned off.
    tableLamp.SwitchOff();
    assert(tableLamp.GetState() == OffState);

    // Following test case checks:
    // - What happens when SwitchOff is called again on
    //   the already switched off table lamp.

    tableLamp.SwitchOff();
    assert(tableLamp.GetState() == OffState);
}


// enum / class / struct name shoud be in Pascal case
// enumaration constant listed verticaly down
// enumaration constant order matters and shoud be done logically
// data members and parameters written in camel case
// be consistant throghout programming
// avoid user interactivity from methods when it is not expected
// delete unwanted comment / code
// don't write unwanted pre-condition