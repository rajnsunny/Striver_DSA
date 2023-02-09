#include <bits/stdc++.h>
using namespace std;

int help(int idx,vector<int>&nums,vector<int> &dp){
    if(!idx) return nums[idx];
    if(idx < 0) return 0;
    if(dp[idx] != -1) return dp[idx];

    int pick = nums[idx] + help(idx-2,nums,dp);
    int n_pick = help(idx-1,nums,dp);

    return dp[idx] = max(pick,n_pick);
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    return help(n-1,nums,dp);
}

int main(){
    int n;
    cin>>n;

    vector<int> dp(n,-1),nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<help(n-1,nums,dp);
}