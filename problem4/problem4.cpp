// problem4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

struct Stİnfo {

	int Age;
	bool HasDriveLicanse;

};
Stİnfo Readİnfo() {
	Stİnfo İnfo;

	cout << "plase enter your age" << endl;
	cin >> İnfo.Age;

	cout << "Do you Have Driver Licanse" << endl;
	cin >> İnfo.HasDriveLicanse;

	return İnfo;

}
bool İsAcceped(Stİnfo İnfo) {
	return(İnfo.Age > 21 && İnfo.HasDriveLicanse);
}
void PrintResult(Stİnfo İnfo) {

	if (İsAcceped(İnfo)) {
		cout << "\nHired ";

	}
	else
	{
		cout << "\nRejicted";
	}
}

int main()
{
	PrintResult(Readİnfo());
	return 0;

}