#include <bits/stdc++.h>
using namespace std;

int help(vector<int>&nums,int n){
   int prev = nums[0];
   int prev2 = 0;
    for(int i=1;i<n;i++){
        int pick = nums[i];
        if(i>1) pick += prev2;
        int n_pick = prev;

        prev2 = prev;
        prev = max(pick,n_pick);
    }

    return prev;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<help(nums,n);
}