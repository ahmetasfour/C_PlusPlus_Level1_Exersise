// problem35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stPiggyBankContent {
    int penny, nickel, dime, quarter, dollar;
};
stPiggyBankContent ReadPiggyBankContent() {
    stPiggyBankContent coin;
    cout << "\nenter penny; ";
    cin >> coin.penny;

    cout << "\nenter nickel; ";
    cin >> coin.nickel;   

    cout << "\nenter dime; ";
    cin >> coin.dime;

    cout << "\nenter quarter; ";
    cin >> coin.quarter;

    cout << "\nenter dollar; ";
    cin >> coin.dollar;

    return coin;
}
int CalculateTotalPennies(stPiggyBankContent coin) {
    int result = coin.nickel + coin.nickel * 5 + coin.dime * 10 + coin.quarter * 25 + coin.dollar * 100;
    return result;


}    
int main()
{
    int total = CalculateTotalPennies(ReadPiggyBankContent());
    cout << "total pennys is =" << total << endl;
    cout << "total dollars is = " << (float)total/100<<endl;
}

