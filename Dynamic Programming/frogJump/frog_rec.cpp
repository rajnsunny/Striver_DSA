/*
Given a number of stairs and a frog, the frog wants to climb from the 0th stair to the (N-1)th stair. At a time the frog can climb either one or two steps. A height[N] array is also given. Whenever the frog jumps from a stair i to stair j, the energy consumed in the jump is abs(height[i]- height[j]), where abs() means the absolute difference. We need to return the minimum energy that can be used by the frog to jump from stair 0 to stair N-1.

*/

#include <bits/stdc++.h>
using namespace std;

int frogJump(int idx,vector<int> &nums){
    if(idx == 0) return idx;

    int jumpOne = frogJump(idx-1,nums) + abs(nums[idx] - nums[idx-1]);
    int jumpTwo(INT_MAX);
    if(idx>1) jumpTwo = frogJump(idx-2,nums) + abs(nums[idx] - nums[idx-2]);

    return min(jumpOne,jumpTwo);
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    cout<<frogJump(n-1,nums);
}



// Time Complexity:  O(2^N)
// Space Complexity: O(N) Recursive Stack Space