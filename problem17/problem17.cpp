// problem17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//19 circle area by Diameter

#include <iostream>
#include <cmath> // Use cmath instead of math.h
using namespace std;


float ReadNumber() {
    float D;
    cout << "Enter the Diameter D: ";
    cin >> D;
    return D;
}

float CircleAreaByDiameter(float D) {
    const double pi = 3.14159265358979323846; // More accurate value for pi
    float area = pi * (pow(D, 2))/4;
    return area;
}

void PrintResultCircleAreaByDiameter(float CircleArea) {
    cout << "Circle Area is: " << CircleArea << endl;
}

int main() {

    PrintResultCircleAreaByDiameter(CircleAreaByDiameter(ReadNumber()));



    return 0;
}
