// problem42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message) {
    float num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num <= 0);
    return num;
}
void NumberOfHours(float num) {
    float HoursToWeek = num / 24 / 7;
    float HoursToDays = num / 24;
    cout << "The number of Days is: " << HoursToDays << endl;
    cout << "The number of week is: " << HoursToWeek << endl;

}
int main()
{
    float x = ReadPositiveNumber("enter hours numbers");
    NumberOfHours(x);


}

