// problem38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber(string Message) {
    int Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

bool IsPrime(int Number) {
    
    if (Number <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= Number/2; i++) {
        if (Number % i == 0) {
            return false;
        }
    }
    return true;

}  
void PrintResult(int Number) {
    if (IsPrime(Number))
    {
        cout << "The numbe is prime";
    }else
        cout << "The numbe is not prime";


}
int main()
{
    PrintResult(ReadNumber("enter the Number"));

}

