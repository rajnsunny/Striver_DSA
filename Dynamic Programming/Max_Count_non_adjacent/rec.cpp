#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&nums,int idx){
    if(!idx) return nums[idx];
    if(idx < 0) return 0;
    int pick = nums[idx] + solve(nums,idx-2);
    int not_pick = solve(nums,idx-1);

    return max(not_pick,pick);
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<solve(nums,n-1);
}