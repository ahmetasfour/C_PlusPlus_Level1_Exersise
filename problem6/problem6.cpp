// #7 problem6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Half of Number:

using namespace std;
#include <stdio.h>
#include <string>
#include <iostream>

int ReadNumber(){
	int number;
	cout << "enter the number: \n";
	cin >> number;
	return number;
}

float CalculateHalfNumber(int num) {

	float result = (float)num / 2;
	return result;


}
void printnumber(int num) {
	string result = " Half of : " + to_string(num) + " is : " + to_string(CalculateHalfNumber(num));

	cout << result;

}

int main() {

	printnumber(ReadNumber());

	return 0;
}