// problem36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//calculation

#include <iostream>
using namespace std;

enum enOperetingType { sub= '+', minens='-', divide='/', mulyple='*', equal='=' };
float ReadNum(string message) {
    int num1;

    cout <<message << endl;
    cin >> num1;
    return num1;

}

enOperetingType ReadOperation() {
    enOperetingType oprChar;
    char op = '+';
    cout << "plase enter operation type (+ ,- ,* ,/)? \n";
    cin >> op;
    return (enOperetingType)op;
}

float calculation(float number1 , float number2 , enOperetingType oprChar) {
    switch (oprChar)
    {
    case enOperetingType::sub:
        return number1 + number2;
    case enOperetingType::minens:
        return number1 - number2;
    case enOperetingType::divide:
        return number1 / number2;
    case enOperetingType::mulyple:
        return number1 * number2;
    default:
        return number1 + number2;

    }
}

int main()
{

    float number1 = ReadNum("plase enter the firs number");
    float number2 = ReadNum("plase enter secound");
    enOperetingType oprChar = ReadOperation();
    cout << endl<<"the result is: " << calculation(number1, number2 , oprChar)<<endl;
}                                             
 