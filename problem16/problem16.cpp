// problem16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//17 circle area

#include <iostream>
#include <cmath> // Use cmath instead of math.h
using namespace std;


float ReadNumber() {
    float r;
    cout << "Enter the radius R: ";
    cin >> r;
    return r;
}

float CircleArea(float r) {
    const double pi = 3.14159265358979323846; // More accurate value for pi
    float area = pi * pow(r, 2);
    return area;
}

void PrintResultCircleArea(float CircleArea) {
    cout << "Circle Area is: " << CircleArea << endl;
}

int main() {

    PrintResultCircleArea(CircleArea(ReadNumber()));
   


    return 0;
}
