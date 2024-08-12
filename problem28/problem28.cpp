// problem28.cpp : This file contains the 'main' function. Program execution begins and ends there.
// sum odd number 1 to N 




#include <iostream>
using namespace std;

enum enChackNum{odd=1 ,even=2}; 

int RaeadN() {
	int N;
	cout << "enter n number for odd number from 1 to N: ";
	cin >> N;
	return N;
}

enChackNum EvenOrOdd(int num) {
	if (num%2==0)
		return enChackNum::even;
	else
		return enChackNum::odd;
}

void SumOddNumber1ToN_UsingFor(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{ 
		if (EvenOrOdd(i)==enChackNum::odd)
		{
			sum += i;
		}

	}
	cout << "the sum of odd number is: " << sum << endl;

}

void SumOddNumber1ToN_UsingWhile(int N){
	int counter = 0;
	int sum = 0;
	while (counter<=N)
	{

		
		if (EvenOrOdd(counter) == enChackNum::odd) {
			sum += counter;

		}
		counter++;
		
		

	}
	cout << "the sum of odd number is: " << sum << endl;

}

void SumOddNumber1ToN_UsingDoWhile(int N){
	int counter = 0;
	int sum = 0;
	do
	{
		

		if(EvenOrOdd(counter) == enChackNum::odd){
			sum += counter;
		}
		counter++;

	} while (counter<=N);

	cout << "the sum of odd number is: " << sum << endl;
}
 
int main()
{
	int N= RaeadN();

	SumOddNumber1ToN_UsingFor(N);
	SumOddNumber1ToN_UsingWhile(N);
	SumOddNumber1ToN_UsingDoWhile(N);
	 
	return 0;

}