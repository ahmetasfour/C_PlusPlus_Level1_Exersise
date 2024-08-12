// problem34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadSeals() {
    int seals;
    cout << "plase enter your sealse";
    cin >> seals;
    return seals;

}
float GetComissionPerctage(int seals) {
	if (seals >= 100000)
		return 0.01;
	else if (seals > 1000000)
		return 0.02;
	else if (seals >500000)
		return 0.03;
	else if (seals >100000)
		return 0.05;
	if (seals > 50000)
		return 0.05;
	else
		return 0.00;

}
float CalculateComissionPerctage(float seals) {
	return GetComissionPerctage(seals) * seals;
}

int main()
{
	float seals = ReadSeals();
	cout << endl << "comission percentage = " << GetComissionPerctage(seals);
	cout << endl << "total comission = " << CalculateComissionPerctage(seals);


}
