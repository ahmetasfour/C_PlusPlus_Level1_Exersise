// problem46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadvalidNumber(string Message) {
    float num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num <0 || num>8);
    return num;
}
enum enDays
{
    Monday=1,
    Tuesday=2,
    Wednesday=3,
    Thursday=4,
    Friday=5,
    Saturday=6,
    Sunday=7,
};

enDays ChackDay(int num) {
    enDays Days;


}
int main() {

    int x = ReadvalidNumber("Enter The Days Number");
    cout << ChackDay(x);
}