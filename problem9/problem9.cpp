// problem9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <stdio.h>
#include <string>
#include <iostream>
enum enPassFail { pass = 1, fail = 2 };
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
float CalculateAvrage(int num1, int num2, int num3) {
	return (float)Sum3Number(num1, num2, num3) / 3;

}

enPassFail checkavrage(float num) {
	if (num >= 50)
		return(enPassFail::pass);

	else
		return(enPassFail::fail);

}

void PrintResult(float total) {
	cout << "\nthe total is: " << total;

	if (checkavrage(total)== enPassFail::pass)
		cout << "\n pass";
	else
		cout << "\nfaild";

}

int main()
{
	enPassFail PassOrFail;
	int num1, num2, num3;

	ReadNumber(num1, num2, num3);
	PrintResult(CalculateAvrage(num1, num2, num3));

}
