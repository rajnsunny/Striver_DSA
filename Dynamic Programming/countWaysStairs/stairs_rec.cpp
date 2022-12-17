//https://leetcode.com/problems/climbing-stairs/description/
//pattern- Fibonacci Series

#include <bits/stdc++.h>
using namespace std;

int stairs(int n){
    if(n <= 2) return n;
    return stairs(n-1)+stairs(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<stairs(n);
}

//TC- O(2^N)
//SC- O(N)  Recursive stack space
