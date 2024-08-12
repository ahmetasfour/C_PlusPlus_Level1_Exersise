// problem45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
struct stSecoundToDaysHour {
    float Days, secound, minuts, hour;
};
float ReadPositiveNumber(string Message) {
    float num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num <= 0);
    return num;
}
stSecoundToDaysHour ReadTaskDuration(int TotalSecound) {
stSecoundToDaysHour TaskDuration;
int Reminder = 0;
const int SecoundPerDay=24*60*60;
const int SecoundPerHours = 60 * 60;
const int SecoundPerMinute = 60;

TaskDuration.Days = floor(TotalSecound/SecoundPerDay);
Reminder = TotalSecound % SecoundPerDay;

TaskDuration.hour = floor(Reminder/ SecoundPerHours);
Reminder = TotalSecound % SecoundPerHours;

TaskDuration.minuts = floor(Reminder/ SecoundPerMinute);
Reminder = TotalSecound % SecoundPerMinute;

 TaskDuration.secound= Reminder;
 
 
 

    return TaskDuration;

}

void PrintResult(stSecoundToDaysHour T) {
    cout << T.Days << ":";
    cout << T.hour << ":";
    cout << T.minuts << ":";
    cout << T.secound << "\n";



}

int main()
{
    int x = ReadPositiveNumber("enter secound");
    PrintResult(ReadTaskDuration(x));

}

