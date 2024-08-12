// problem31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//factorial N!

using namespace std;
#include <stdio.h>
#include <string>
#include <iostream>

int ReadPpsitiveNumber(string Message) {
	int number;
	do
	{
		cout << Message <<endl;
		cin >> number;

	} while (number<0);
	return number;
}
void CalculateFactorial(int N) {
	int Factorial = 1;
	for (int i = N; 1 <=i;)
	{
		Factorial *= i;
		i--;
	}

	cout << "The result is " << Factorial << endl;
}

int main()
{
	
	CalculateFactorial(ReadPpsitiveNumber("plase enter N"));
	return 0;

}

