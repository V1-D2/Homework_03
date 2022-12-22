
#include <stdlib.h>

using namespace std;


class Vehicle{
    // initializing variables
    private:
        int wheelers;
        string name;
        int cost;
    public:
        Vehicle(int w, string n, int c);
        Vehicle();
        int getWh();
        string getName();
        int getCost();
};