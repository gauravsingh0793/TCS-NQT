#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number:" << endl;
    cin >> num;

    if(num >=1){
        cout << "Positive no";
    }
    else if(num==0){
        cout << "Zero";
    }
    else{
        cout << "Negative no";
    }

    return 0;
}