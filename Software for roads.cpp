
#include <iostream>
#include "Vehicle.h"

using namespace std;

int main()
{
    string input;
    // array of passed vehicles. At all the length could be as big as needed
    Vehicle arr[1000];
    // iterator
    int i = 0;
    int total = 0;
    string classes[] = {"Two_Cycle", "Two_Electric Scooty", "Two_Motor Cycle", 
    "Two_Electric Cycle", "Four_Cars", "Four_SUV", "Four_Crossovers", 
    "Four_Vans", "Four_Pickups", 
    "Four_Minibus", "Four_MiniVans", "Four_campervan","Six_Tractors", 
    "Six_Agricultural machines", "Six_Busses", "Six_Coaches", 
    "Six_Vans", "Six_Trucks", "Six_Lorries",
    "Ten_Trucks", "Ten_agricultural machines"};
    
    
    cout << "At all you have the next options:\n";
    cout << "Enter the class of vehicle or ask for report" << endl;
    cout << "If you would like to receive report please";
    cout << " enter one of numbers below:"<< endl;
    cout << "1 - Total toll collected" << endl;
    cout << "2 - Total vehicles crossed" << endl;
    cout << "3 - Total toll collected from each vehicle" << endl;
    cout << "4 - Total toll collected from each type of vehicle" << endl;
    cout << "5 - Number of each vehiclecrossed" << endl;
    cout << "6 - Number of each type of vehicle crossed"<< endl;
    cout << endl;
    
    while (1 > 0){
        // reading input
        cout << "Enter the number of whelers in words or";
        cout << " code of record." << endl;
        cout << "If you enters a vehicle type and class please enter it like: ";
        cout << "'Amount of wheelere'_'Class of vehicle':";
        cin >> input;
        int numOfWh;

        
        // for cheking the class of a vhicle
        if (input == classes[0] or input == classes[1]
            or input == classes[2] or input == classes[3]){
                arr[i] = Vehicle(2, input, 1);
                i++;
                total = total + 1;
            }
        else if (input == classes[4] or input == classes[5]
            or input == classes[6]){
            arr[i] = Vehicle(4, input, 2);
                i++;
                total = total + 2;
        }
        else if (input == classes[7] or input == classes[8]
            or input == classes[9] or input == classes[10]
            or input == classes[11]){
                
            arr[i] = Vehicle(4, input, 3);
                i++;
                total = total + 3;
        }
        else if (input == classes[12] or input == classes[13]){
            arr[i] = Vehicle(4, input, 4);
                i++;
                total = total + 4;
        }
        else if (input == classes[14] or input == classes[15]
            or input == classes[16]){
            arr[i] = Vehicle(6, input, 5);
                i++;
                total = total + 5;
        }
        else if (input == classes[17] or input == classes[18]){
            arr[i] = Vehicle(6, input, 6);
                i++;   
                total = total + 6;
        }
        else if (input == classes[19] or input == classes[20]){
            arr[i] = Vehicle(10, input, 10);
                i++;
                total = total + 10;
        }
        else if(input == "Exit"){
            break;
        }
        else if(input == "1"){
            cout << "Total toll collected: " << total;
            cout << endl;
        }
        else if (input == "2"){
            cout << "Vehicle passed: " << i << endl;
            cout << endl;
        }
        else if (input == "3"){
            for (int j = 0; j < sizeof(classes)/sizeof(classes[1]); j++){
                int amountOfType = 0;
                int tempCs = 0;
                for (int k = 0; k < i; k++){
                    if (classes[j] == arr[k].getName()){
                        tempCs = tempCs + arr[k].getCost();
                    }
                }
                cout << classes[j] << ": " << tempCs << endl;
            }
            cout << endl;
            
        }
        else if (input == "4"){
            for (int j = 2; j <= 10; j = j + 2){
                int tempCS = 0;
                int amountOfType = 0;
                for (int k = 0; k < i; k++){
                    if ( j == arr[k].getWh()){
                        tempCS = tempCS + arr[k].getCost();
                    }
                }
                cout << j << " wheelers` cost" << ": " << tempCS<< endl;
            }
            cout << endl;
        }
        else if (input == "5"){
            for (int j = 0; j < sizeof(classes)/sizeof(classes[1]); j++){
                int amountOfType = 0;
                for (int k = 0; k < i; k++){
                    if (classes[j] == arr[k].getName()){
                        amountOfType++;
                    }
                }
                cout << classes[j] << ": " << amountOfType << endl;
            }
            cout << endl;
            
        }
        else if (input == "6"){
            for (int j = 2; j <= 10; j = j + 2){
                int amountOfType = 0;
                for (int k = 0; k < i; k++){
                    if ( j == arr[k].getWh()){
                        amountOfType++;
                    }
                }
                cout << j << " wheelers" << ": " << amountOfType << endl;
            }
            
            cout << endl;
        }
        else {
            cout << "You entered mistake type!" << endl;
        }
    }

    return 0;
}