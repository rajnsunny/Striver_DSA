#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sec_pre_num = 0;
    int pre_num = 1;
    for(int i=2;i<=n;i++){
        int temp = sec_pre_num + pre_num;
        sec_pre_num = pre_num;
        pre_num = temp;
    }

    cout<<pre_num;

}

//TC:  O(N)
//SC: O(1)  ->  just to store the second previous and just previous Number.