#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the no:" << endl;
    cin >> num;

    if(num%2==0){
        cout << "Even number";
    }
    else{
        cout << "Odd number";
    }

    return 0;
}