#include<iostream>
#include<string>
using namespace std;
enum enNumberType { odd = 1, even = 2 };


int ReadNumber() {
    int num;
    cout << "enter the number :" << endl;
    cin >> num;

    return num;

}
enNumberType CheckNumberType(int num) {
    int result = num % 2;
    if (result == 0)
        return enNumberType::even;
    else
        return enNumberType::odd;
}

void PrintNumberType(enNumberType NumberType) {

    if (NumberType == enNumberType::even)
        cout << "even";

    else
        cout << "odd";

}

int main() {

    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;

}