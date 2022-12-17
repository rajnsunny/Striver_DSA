//https://leetcode.com/problems/climbing-stairs/description/
//pattern- Fibonacci Series

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int pre2 = 0;
    int pre=1;
    for(int i=2;i<=n;i++){
        int temp = pre + pre2;
        pre2 = pre;
        pre = temp;
    }

    cout<<pre;
}


//TC- O(N);
//SC- O(1)    store: second previous and first previous.