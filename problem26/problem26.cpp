// problem26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadN() {
    int Number;
    cout << "Plase enter your age: " << endl;
    cin >> Number;
    return Number;
}

void OneToN(int Number) {
    cout << "1 to N:  \n";
    for (int i = 1; i <= Number; i++)
    {
        cout <<"the number :" << i << "\n ";

    }
}

int main()
{
    OneToN(ReadN());
}
