// problem13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Rectangle erea

#include <iostream>
using namespace std;
#include <stdio.h>
#include <string> 

void ReadNumber(float& a, float& b) {

	cout << "enter the first number: \n";
	cin >> a;
	cout << "enter the secound number: \n";
	cin >> b;
}

float CalculateRectangleArea(float a, float b) {

	return a * b;
}

void PrintResultSwapNum(float result) {

	cout << "RectangleArea is ;" <<result << endl;

}
int main()
{
	float a, b;
	ReadNumber(a, b);
	PrintResultSwapNum(CalculateRectangleArea(a, b));



}