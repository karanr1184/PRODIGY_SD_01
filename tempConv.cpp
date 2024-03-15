#include<bits/stdc++.h>
using namespace std;

float CToF(float temp){
    return (temp * 1.8) + 32;
}

float CToK(float temp){
    return temp + 273.15;
}

float KToC(float temp){
    return temp - 273.15;
}

float KToF(float temp){
    return CToF(KToC(temp));
}


float FToC(float temp){
    return (temp - 32) * 1.8;
}

float FToK(float temp){
    return CToK(FToC(temp));
}


int main(){
    float temp;
    cout << "Enter the temprature: ";
    cin >> temp;
    int unit;
    cout << "Enter the unit of temprature(1 for celsius, 2 for kelvin, 3 for fahrenheit): ";
    cin >> unit;

    switch(unit){
        case 1:
            cout << temp << " °C = " << CToF(temp) << " °F" << endl;
            cout << temp << " °C = " << CToK(temp) << " °K" <<endl;
            break;
        
        case 2:
            cout << temp << " °K = " << KToF(temp) << " °F" <<endl;
            cout << temp << " °K = " << KToC(temp) << " °C" << endl;
            break;
        
        case 3:
            cout << temp << " °F = " << FToC(temp) << " °C" << endl;
            cout << temp << " °F = " << FToK(temp) << " °K" << endl;
            break;

        default:
            cout << "Please select correct unit." << endl;
    }

    return 0;
}