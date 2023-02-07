#include <bits/stdc++.h>
using namespace std;

int frogJump(int idx,vector<int> &nums,vector<int> &dp){

    for(int i=1;i<idx;i++){
        int jumpTwo = INT_MAX;
        int jumpOne= dp[i-1] + abs(nums[i]-nums[i-1]);
        if(i>1)
            jumpTwo = dp[i-2] + abs(nums[i]-nums[i-2]);
    
        dp[i]=min(jumpOne, jumpTwo);
    }
   
    return dp[idx-1];
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    vector<int> dp(n,0);
    cout<<frogJump(n,nums,dp);
}

//Time Complexity - O(N)
// Space Complexity - O(N) to store DP.