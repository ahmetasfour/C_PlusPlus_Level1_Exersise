// problem7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#8


using namespace std;
#include <stdio.h>
#include <string>
#include <iostream>
enum enPassFail {pass=1 , fail=2};

enPassFail ispassorfial(int num) {
	if (num >= 50)
		return(enPassFail::pass);

	else
		return(enPassFail::fail);
	
}

int ReadNumber() {
	int number;
	cout << "enter the number: \n";
	cin >> number;
	return number;
}
void printresult(enPassFail PassOrFail) {
	if (PassOrFail==enPassFail::pass)
		
		cout << "pass";
	else
		cout << "faild";



}
int main()
{
	printresult(ispassorfial(ReadNumber()));
   
}
