#include<iostream>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
using namespace std;
const int N = 1e5+2;
signed main(){
    int n;
    cin >> n;

    vi dp(n+1);


    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    rep(i, 3, n+1);
    {
    d[i] = d[i-1] + d[i-2] + d[i-3];
    }
    cout << d[n;]

return 0;
}