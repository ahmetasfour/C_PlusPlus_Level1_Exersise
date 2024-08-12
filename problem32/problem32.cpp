// problem32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <stdio.h>
#include <string>
#include <iostream>

int ReadNumber() {
	int x;
	cout << "plase enter the Number : " << endl;
	cin >> x;
	return x;


}
int ReadPower() {
	int y;
	cout << "plase enter the power : " << endl;
	cin >> y;
	return y;



}
int PowerOfNumber(int M , int Number) {
	if (M==0)
	{
		//any number powered to zero gives 1
		return 1;
	}
	int result = 1;
	for (int i = 1; i <= M; i++)
	{
		result *= Number;
	}
	return result;


}

int main()
{
	int x = ReadNumber();
	int y = ReadPower();
	
cout<<endl<<"result ="<<PowerOfNumber(y ,x);


	return 0;




}

