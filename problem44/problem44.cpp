// problem44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct stTaskDuration {
    float Days, secound, minuts, hour;
};
stTaskDuration ReadTaskDuration() {

    /*float ReadPositiveNumber(string Message) {
    float num;
    do
    {
        cout << Message << endl;
        cin >> num;


    } while (num <= 0);
    return num;
}*/
    stTaskDuration TaskDuration;
    cout << "enter task of secound duration" << endl;
    cin >> TaskDuration.secound;
    cout << "enter task of minuts duration" << endl;
    cin >> TaskDuration.minuts;

    cout << "enter task of hours duration" << endl;
    cin >> TaskDuration.hour;
    cout << "enter task of Days duration" << endl;
    cin >> TaskDuration.Days;
    return TaskDuration;

}
int TaskDurationInSecound(stTaskDuration TaskDuration) {
    float totalSecound = TaskDuration.secound + TaskDuration.minuts * 60 + TaskDuration.hour * 3600 + TaskDuration.Days* 86400;
    return (float)totalSecound;
    /*int DurationInSecound=0;
    DurationInSecound=TaskDuration.secound*24*60*60;
    DurationInSecound += TaskDuration.secound60*60;
    DurationInSecound += TaskDuration.secound60;
    DurationInSecound += TaskDuration.secound;
    return DurationInSecound;



    */
}

int main()
{
   cout<<"the total secound is " <<TaskDurationInSecound(ReadTaskDuration())<< " secound " <<endl;

}
