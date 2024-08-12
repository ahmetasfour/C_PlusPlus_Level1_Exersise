// problem8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <stdio.h>
#include <string>
#include <iostream>

void ReadNumber(int& num1, int& num2, int& num3) {

	cout << "enter the number: \n";
	cin >> num1;
	cout << "enter the number: \n";
	cin >> num2;
	cout << "enter the number: \n";
	cin >> num3;

}
int Sum3Number(int num1, int num2, int num3) {
	return 	(num1 + num2 + num3);
	
}
void PrintResult(int total) {
	cout << "the total is: \n" << total;

}

int main()
{
	int num1, num2, num3;

	ReadNumber(num1 ,num2,num3);
	PrintResult(Sum3Number(num1, num2, num3));

}
