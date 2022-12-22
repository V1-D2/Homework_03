
#include <string>
#include <stdlib.h>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(int wh, string n, int c){
    wheelers = wh;
    name = n;
    cost = c;
}
Vehicle::Vehicle(){
    name = "Cycle";
    wheelers = 2;
    cost = 1;
}

int Vehicle::getWh(){
    return wheelers;
}

string Vehicle::getName(){
    return name;
}
int Vehicle::getCost(){
    return cost;
}