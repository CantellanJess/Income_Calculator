#include <iostream>
#include <string>

using namespace std;

int main(){
    int days, dailyhours, weeklyhours;
    float hourlywage;
    double totaldailypay, totalweeklypay;
    
    cout << "Please enter amount of days worked: ";
    cin >> days;
    cout << "Please enter amount of hours worked in a day: ";
    cin >> dailyhours;
    cout << "Please enter amount of hours worked in a week: ";
    cin >> weeklyhours;
    cout << "Please enter your hourly wage: $";
    cin >> hourlywage;
    
    cout << "\nAmount of days worked: " << days << endl;
    cout << "Time worked daily: " << dailyhours << endl;
    cout << "Time worked weekly: " << weeklyhours << endl;
    cout << "Hourly wage: $" << hourlywage << endl;
    
      totaldailypay = hourlywage * dailyhours;
        cout << "\nYou've earned $" << totaldailypay << " daily!" << endl;
       totalweeklypay = hourlywage * weeklyhours;
        cout << "You've earned $" << totalweeklypay << " in a week!" << endl;
        
    return 0;
}