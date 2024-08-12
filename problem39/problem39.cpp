// problem39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum PrimeNotPrime
{prime=1 , NotPrime=2};

float ReadPositiveNumber(string Message){
    int num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num < 0);
    return num;
}
PrimeNotPrime CeckPrime(int num) {
    int M = round(num / 2);
    for (int i = 2; i < M; i++)
    {
        if (num%i==0)
        {
            return PrimeNotPrime::NotPrime;
        }

    }
    return PrimeNotPrime::prime;


}
void PrintNumberType(int num) {
    if (CeckPrime(num)==PrimeNotPrime::prime)
    {
        cout << "is prime: " << endl;
    }
    else
        cout << "The number is not prime" << endl;
}
 
int main()
{
    PrintNumberType(ReadPositiveNumber("Enter The Number: "));
    return 0;
}
