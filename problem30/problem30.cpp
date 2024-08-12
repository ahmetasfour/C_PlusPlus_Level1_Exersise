// problem30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Sum 1 To N

#include <iostream>
using namespace std;

enum enChackNum { odd = 1, even = 2, all = 3 };

int RaeadN() {
	int N;
	cout << "enter n number for odd number from 1 to N: ";
	cin >> N;
	return N;
}

enChackNum EvenOrOdd(int num) {
	if (num % 2 == 0)
		return enChackNum::even;
	else
		return enChackNum::odd;
	if (enChackNum::all)
		return enChackNum::all;
}

void SumAllNumber1ToN_UsingFor(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (enChackNum::all)
		{
			sum += i;
		}

	}
	cout << "the sum of odd number is: " << sum << endl;

}
int main()
{
	int N = RaeadN();
	SumAllNumber1ToN_UsingFor(N);

	return 0;

}