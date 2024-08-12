// problem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<iostream>
#include<string>
using namespace std;

string readName() {
    string YourName;
    cout << "Please enter your name: ";
    getline(cin, YourName);
    return YourName;
}

void printName(string YourName) {
    cout << "Welcome: " << YourName << endl;
}

int main() {
    printName(readName());
    return 0;
}