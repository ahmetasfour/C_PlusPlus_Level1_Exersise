// problem33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadGrade(int From ,int To) {
	int x;
	do
	{
		cout << "plase enter Grade Number : " << endl;
		cin >> x;
	} while (x <= From || x >= To);
	return x;
}

char ChackGrade(int Grade) {
	if ( Grade >= 90)
		return 'A';
	else if ( Grade >= 80)
		return 'B';		
	else if (Grade >= 60)
		return 'C';		
	else if (Grade >= 55)
		return 'D';		
	if (Grade >= 50)
		return 'E';
	else
		return 'F';


}

int main()
{
    cout << "Your Grade is :\n"<< ChackGrade(ReadGrade(0,100));
}
