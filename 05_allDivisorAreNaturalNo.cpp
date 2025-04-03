#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n,i;
    cout << "enter a natural no: ";
    cin >> n;

    cout << "the divisor of the " << n << " are :";

    for(int i=1; i<=n; i++){
        if(n % i ==0){
            cout << i << " ";
        }
    }

    return 0;
}