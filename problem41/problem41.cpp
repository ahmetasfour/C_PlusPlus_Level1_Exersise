// problem41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message) {
    int num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num < 0);
    return num;
}
void CalculateTax(int num){
    float PriceWithService=num+(num)*0.1;
    float total = PriceWithService + (PriceWithService) * 0.16;
    cout << "The Price is :" << num<<endl;
    cout << "The Price with services fee is :" << PriceWithService << endl;
    cout << "The total with taxes is :" << total << endl;


}
int main()
{
    CalculateTax(ReadPositiveNumber("Enter The fast food price: "));
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
