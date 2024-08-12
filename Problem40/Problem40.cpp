// Problem40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Total Bill & CashPaid
#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message) {
    int num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num < 0);
    return num;
}
int CalculateResult(int Bill ,int Paid) {
    int result = Paid - Bill;
    return result;
}
int main()
{
    int y = ReadPositiveNumber("Enter Total Bill");
    int x = ReadPositiveNumber("Enter Total Paid");
    cout << "The result is : " << CalculateResult(y, x);

}

