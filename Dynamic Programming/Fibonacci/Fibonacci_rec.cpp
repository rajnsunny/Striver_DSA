#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}


//TC- O(2^N)
//SC- O(N) - Recursion Stack Space

/*
                         f(5)
             f(4)                                  f(3)
          f(3)             f(2)                 f(2)  f(1) 
       f(2) f(1)        f(1) f(0)             f(1) f(0)  1
       f(1) f(0) 1       1     0              1    0    1
       1     0   1      1       0              1     0   1   ->>>    fibo(5)= 5


*/