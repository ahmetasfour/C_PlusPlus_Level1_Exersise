// problem10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#11
#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>

void ReadNumber(int& number1, int& number2) {

	cout << "enter the first number: \n";
	cin >> number1;
	cout << "enter the secound number: \n";
	cin >> number2;

}
int Compere(int number1, int number2) {
	if (number1 > number2)
		return number1;
	else
		return number2;

}

void printResult(int greter) {
	cout << "the greter number is: " << greter;

}

int main()
{
	int number1, number2;
	ReadNumber(number1, number2);
	printResult(Compere(number1, number2));
}