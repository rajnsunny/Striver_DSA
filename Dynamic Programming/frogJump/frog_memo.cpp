#include <bits/stdc++.h>
using namespace std;

int frogJump(int idx,vector<int> &nums,vector<int> &dp){
    if(idx == 0) return 0;
    if(dp[idx] != -1) return dp[idx];
    int jumpOne = frogJump(idx-1,nums,dp) + abs(nums[idx] - nums[idx-1]);
    int jumpTwo(INT_MAX);
    if(idx>1) jumpTwo = frogJump(idx-2,nums,dp) + abs(nums[idx] - nums[idx-2]);

    return dp[idx] = min(jumpOne,jumpTwo);
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> dp(n,-1);
    cout<<frogJump(n-1,nums,dp);
}


//Time Complexity - O(N)
//Space complexity - O(N + N) DP Space + Recursive space