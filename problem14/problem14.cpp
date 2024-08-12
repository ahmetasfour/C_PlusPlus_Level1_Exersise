// problem14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//16 rectangle area through diagonal and side erea of rectangle
//                                                                          *******************
//                                                                          *	*		d		*
//                                                                       a  *	  	*			*
//                                                                          *			*		*
//                                                                          *				*	*
//                                                                          *******************
                                                                            
#include <iostream>
using namespace std;
#include <stdio.h>
#include <string> 
#include <math.h> 

void ReadNumber(float& a, float& d) {

	cout << "enter the a number: \n";
	cin >> a;
	cout << "enter the diagonal number: \n";
	cin >> d;
}

float RectangleAreaBySideAndDiagonalArea(float a, float d) {
	float area = a * sqrt((float)pow(d, 2) - (float)pow(a, 2));
	return (float)area;
}

void PrintResultSwapNum(float result) {

	cout << "RectangleArea is ;" << result << endl;

}
int main()
{
	float a, d;
	ReadNumber(a, d);
	PrintResultSwapNum(RectangleAreaBySideAndDiagonalArea(a, d));



}