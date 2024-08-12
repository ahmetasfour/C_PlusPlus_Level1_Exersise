using namespace std;
#include <stdio.h>
#include <string.h>
#include <iostream>

struct stData {
    string name;
    string lastname;
};

stData ReadData() {

    stData Data;
    cout << "enter your first name :";
    cin >> Data.name;

    cout << "enter your last name :";
    cin >> Data.lastname;
    return Data;
}
string GetFullName(stData Data , bool revers) { //bool revers (if true make lastname is first ....)
    string FullName = "";
    if (revers)
        FullName = Data.lastname + " " + Data.name;
    else
        FullName = Data.name + " " + Data.lastname;
    return FullName;

}
void PrintName(string FullName) {
    cout << "your full name is :" << FullName;
}
int main() {

    PrintName(GetFullName(ReadData(),false));

}