// problem11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//12

#include <iostream>
using namespace std;
#include <stdio.h>
#include <string> max of three numbers

void ReadNumber(int& a, int& b, int& c) {

	cout << "enter the first number: \n";
	cin >> a;
	cout << "enter the secound number: \n";
	cin >> b;
	cout << "enter the theerd number: \n";
	cin >> c;

}
int Compere(int a, int b , int c) {

	if (a > b)
		if (a > c)
			return a;
		else
			return c;

	else
		if (b > c)
			return b;
		else
			return c;



	/*if (a > b> c)
		return a;
	if (c > b > c)
		return c;
	if (b > a > c)
		return b;*/

}

void printResult(int greter) {
	cout << "the greter number is: " << greter;

}

int main()
{
	int a, b, c;
	ReadNumber(a, b, c);
	printResult(Compere(a, b, c));
}