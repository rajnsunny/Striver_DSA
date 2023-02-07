#include <bits/stdc++.h>
using namespace std;

int frogJump(int idx,vector<int> &nums){
    int prev(0),prev2(0);
   for(int i=1;i<idx;i++){
      
      int jumpTwo = INT_MAX;
      int jumpOne= prev + abs(nums[i]-nums[i-1]);
      if(i>1)
        jumpTwo = prev2 + abs(nums[i]-nums[i-2]);
    
      int cur_i=min(jumpOne, jumpTwo);
      prev2=prev;
      prev=cur_i;
        
  }

  return prev;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
 
    cout<<frogJump(n,nums);
}


//Time Complexity - O(N)
// Space Complexity - O(1) 

/*
    Note: Analyze the pattern in the 1D DP , may be Optimise to Space Complexity O(1).
*/