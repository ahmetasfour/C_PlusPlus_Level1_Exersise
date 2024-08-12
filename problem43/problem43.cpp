// problem43.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void vergisiz(int num) {
    float total = num - num * 0.20;
    cout << "toplam fiyat = " << num<<endl;
    cout << "vergisiz fiyat = " << total<<endl;
}

int main()
{
    int x= ReadPositiveNumber("fiyatı gir");
    vergisiz(x);

}
