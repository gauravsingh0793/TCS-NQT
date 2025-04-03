#include<iostream>
using namespace std;

// to check no is Prime or not.
int main(){
    int num , count=0;

    cout << "Enter the no:" << endl;
    cin >> num;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }

        if(count==2){
            cout << "The no is Prime No" << endl;
        }
        else{
            cout << "The no is not Prime NO" << endl;
        }
    

    return 0;
    

}