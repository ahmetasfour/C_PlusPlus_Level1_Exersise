#include<iostream>
#include<string>
using namespace std;
string ReadName() {
    string YourName;
    cout << "Please enter your name: ";
    getline(cin, YourName);

    return YourName;
}
void PrintName(string YourName) {
    cout << "Welcome: " << YourName << endl;
}

int main() {
    PrintName(ReadName());
    return 0;
}



