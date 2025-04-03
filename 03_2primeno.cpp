#include<iostream>
using namespace std;

bool isPrimeNo(int num){
    if (num < 2) return false;
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n1,n2;
    // cout << "Print a Prime no between 2 and 100" << endl;
    cout << "enter the first prime no:";
    cin >> n1;

    cout  << "enter the second primem no:";
    cin >> n2;

    for(int i=n1; i<=n2; i++){
        if (isPrimeNo(i)){
            cout << i <<" " <<endl;
        }
    }
    
   
    return 0;

}