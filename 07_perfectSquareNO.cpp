#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquare(int num){
    if (num < 0) return false;

    int sqrtnum = sqrt(num);
    return  (sqrtnum * sqrtnum == num);
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if (isPerfectSquare(n)){
        cout << n << " is perfect Square no.";
    }
    else{
        cout << n << "  is not perfect square no.";
    }
    return 0;
}