// problem18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//20 Circle Area Inscribed In a Square
#include <iostream>
#include <cmath> // Use cmath instead of math.h
using namespace std;


float ReadNumber() {
    float D;
    cout << "Enter the Diameter D: ";
    cin >> D;
    return D;
}

float CircleAreaInscribedInSquare(float D) {
    const double pi = 3.14159265358979323846; // More accurate value for pi
    float area = pi * (pow(D, 2)/ 4);
    return area;
}

void PrintResultCircleAreaInscribedInSquare(float CircleArea) {
    cout << "Circle Area is: " << CircleArea << endl;
}

int main() {

    PrintResultCircleAreaInscribedInSquare(CircleAreaInscribedInSquare(ReadNumber()));



    return 0;
}
