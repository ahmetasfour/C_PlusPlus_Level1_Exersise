// problem15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//17 Triangle area


#include <iostream>
using namespace std;
#include <stdio.h>
#include <string> 
#include <math.h> 

void ReadNumber(float& a, float& h) {

	cout << "enter the a number: \n";
	cin >> a;
	cout << "enter the h number: \n";
	cin >> h;
}

float TriangleArea(float a, float h) {
	float TriangleArea;
	TriangleArea = (a / 2) * h;
	return TriangleArea;
}

void PrintResultTriangleArea(float TriangleArea) {

	cout << "Triangle Area is ;" << TriangleArea << endl;

}
int main()
{
	float a, h;
	ReadNumber(a, h);
	PrintResultTriangleArea(TriangleArea(a, h));



}
