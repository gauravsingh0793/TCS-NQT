#include<iostream>
#include<string>
using namespace std;

bool isleapYear(int year){
    if(year % 400 ==0) return true; // divisible by 400 leap year
    if(year % 100 ==0) return false; // divisible by 100 but not 400 is not leap year
    if(year % 4 ==0) return true;  // divisible by 4 but not 100 is also leap year
    return false;                 // not divisible by 4 is not leap year
}

int main(){
    int year;
    cout << "Enter the Year:" << endl;
    cin >> year;

    if(isleapYear(year)){
        cout << isleapYear << "is leap Year" << endl;
    }
    else{
        cout << isleapYear << "is not Leap Year" << endl;
    }



    return 0;

}