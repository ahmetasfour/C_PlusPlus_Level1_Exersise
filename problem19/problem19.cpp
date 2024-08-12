// problem19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//generic function validat age 18_45

#include <iostream>
using namespace std;
int ReadAge() {
    int age;
    cout << "Plase enter your age: " << endl;
    cin >> age;
    return age;
}
bool ValidateNumberInRange(int Number, int From, int To) {
    return(Number >= From && Number <= To);
}
void PrintResult(int age) {
    if (ValidateNumberInRange(age ,18,45))
        cout << "is a valid age";
    else
        cout << "is a invalid age";

}
int main()
{
    PrintResult(ReadAge());
}

