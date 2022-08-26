#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //initialising values of size and array elements
    int n=10;
    int arr[10]={2,5,3,2,4,5,3,6,7,3};
    
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        if(i.second==1){
            cout<<i.first<<" ";
        }
    }

    return 0;
}
