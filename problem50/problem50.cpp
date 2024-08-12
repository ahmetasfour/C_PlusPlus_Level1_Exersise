// problem50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
string ReadPassword() {
    string password;
    cout << "ENTER THE PASSWORD"<<endl;
    cin >> password;
    return password;

}

bool Login() {
    string psswd;
    do
    {
        psswd = ReadPassword();
        if (psswd=="1234")
        {
            return 1;
        }
        else
        {
            cout << "\n Worng PIN \n";
            system("color 4F");
        }
    } while (psswd != "1234");
}
int main()
{
    if (Login())
    {
        cout << "your palance 5k";
        system("color 2F");

    }
}
