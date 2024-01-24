#include<bits/stdc++.h>
using  namespace std;

int mod = 1e9 + 7;
int dp[100000] = {0};


int helper(int n, int sum) {
    if (sum > n) {
        return 0;
    }
    if (sum == n) {
        return 1;
    }
    if (dp[sum] != -1) {
        return dp[sum];
    }
    int count = 0;
    for (int i = 1; i <= sum; i++) {
        count += helper(n, sum + i);
        count %= mod;
    }

    return dp[sum] = count;
}


void  solve(int n) {
    cout << helper(n, 1) << endl;
}

int main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    solve(n);
}