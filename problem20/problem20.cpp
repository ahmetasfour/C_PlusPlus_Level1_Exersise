// problem20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//25 ReadUntil age between 18_45

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

int ReedUntillNumberInRange(int From , int To) {
    
    int age = 0;
    do
    {
        age = ReadAge();

    } while (!ValidateNumberInRange(age,From ,To));
    return age;

}
void PrintResult(int age) {
    if (ValidateNumberInRange(age, 18, 45))
        cout << "is a valid age: " << age;
    else
        cout << "place enter valid age";

}
int main()
{
    PrintResult(ReedUntillNumberInRange(18,45));
    return 0;
}




/*    while (!ValidateNumberInRange(age ,18 ,45))
    {
        cout << "place enter valid age";
    }*/