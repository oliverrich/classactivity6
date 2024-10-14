#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    //declaring variables for address
    string houseNumber;
    string streetName;
    string city;
    string state;
    string zipCode;

    //asking questions
    cout << "Enter House Number : " << endl;
    cin >> houseNumber;
    cout << "Enter Street Name : " << endl;
    cin >> streetName;
    cout << "Enter City Name : " << endl;
    cin >> city;
    cout << "Enter State : " << endl;
    cin >> state;
    cout << "Enter Zip Code : " << endl;
    cin >> zipCode;

    // formating address
    cout << "Address:" << endl;
    cout << houseNumber << " " << streetName << endl;
    cout << city << ", " << state << endl;
    cout << zipCode << endl;

    return 0;
}
