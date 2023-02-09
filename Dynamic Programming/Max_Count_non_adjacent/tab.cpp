#include <bits/stdc++.h>
using namespace std;

int help(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
    dp[0] = nums[0];
    for(int i=1;i<n;i++){
        int pick = nums[i];
        if(i > 1) pick += dp[i-2];
        int n_pick = dp[i-1];
        dp[i] = max(pick,n_pick);
    }

    return dp[n-1];
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<help(nums);
}