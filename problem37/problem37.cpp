// problem37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int ReadNum(string ms) {
    int num1;
    cout << ms<<"\n" ;
    cin >> num1;
    return num1;
}

int SumNumbers(){
    const int stopCondion = -99;
    int Number = 0, Counter = 1, sum = 0;;

    do
    {
        Number = ReadNum("plase enter number" + to_string(Counter));
        if (Number==stopCondion)
        {
            break;
        }
        sum += Number;
        Counter++;

    } while (Number!=stopCondion);
    return sum;
}
int main()
{
    cout <<"result = " << SumNumbers() << endl;
}

