#include<iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0; int b =1;
    cout << "the fibonacci series of the " << n <<"  th no is: ";

    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    for(int i =2; i < n; i++){
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
}

int main(){
    int num;
    cout << "Enter the Number ";
    cin >> num;

    fibonacci(num);

    return 0;
}

