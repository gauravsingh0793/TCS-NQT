#include<iostream>
using namespace std;

bool isPrimeNO(int num){
    if (num < 2) return false;
    for (int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    int sum = 0;

    for(int i=1; i<=100; i++){
        if(isPrimeNO(i)){
            cout << i <<" ";
            sum = sum +i; 
        }
    }

    cout  << "\n" <<sum;
   

    return 0;
}