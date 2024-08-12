// problem12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//14 swap 2 number;

#include <iostream>
using namespace std;
#include <stdio.h>
#include <string> 

void ReadNumber(int& a, int& b) {

	cout << "enter the first number: \n";
	cin >> a;
	cout << "enter the secound number: \n";
	cin >> b;
}
void swap2number(int& a, int& b){

	a = b + a;
	b = a - b;
	a = a - b;
/*	int temp;
	temp = a;
	a = b;
	b = temp;
	*/

}
void PrintNum(int a, int b) {

	cout << "before swap a is ;" << a << "  b is :" << b<< endl;

}
void PrintResultSwapNum(int a, int b) {
	
	cout <<"After swap a is ;" << a << "  b is :" << b<<endl;

}
int main()
{
	int a, b;
	ReadNumber(a, b);
	PrintNum(a, b);
	swap2number(a, b);
	PrintResultSwapNum(a, b);
}
