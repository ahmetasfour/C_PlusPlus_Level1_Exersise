// problem48.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
float CalculateMontlyPayment(float LoanAmout, float MonthlyInstallment) {
    return (float)LoanAmout / MonthlyInstallment;
   


}

int main()
{
    int y = ReadPositiveNumber("enter montly payment : ");

    int x = ReadPositiveNumber("inter totoal price : ");
    cout << "\n Total Mounths to pay = " << CalculateMontlyPayment(x ,y);

}

