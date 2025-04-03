#include<iostream>
using namespace std; 

int main (){

    int n, sum;

    cout << "Enter the natural no: ";
    cin >> n;

    sum = n * (n + 1)/2;

    cout << "the sum of first " << n << " natural no is " << sum;

    return 0;
}