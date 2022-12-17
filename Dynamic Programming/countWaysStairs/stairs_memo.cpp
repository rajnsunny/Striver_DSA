//https://leetcode.com/problems/climbing-stairs/description/
//pattern- Fibonacci Series


#include <bits/stdc++.h>
using namespace std;

int stairs(int n,vector<int> &dp){
    if(n<=2)return 2;
    if(dp[n] != -1) return dp[n];
    return stairs(n-1,dp)+stairs(n-2,dp);
}

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
   cout<<stairs(n,dp);
    
}


//TC- O(N)
//SC- O(N) + O(N)   Recursive stack space + vector space