#include <bits/stdc++.h>

using namespace std;


void findRepeat(int* a, int n){
    unordered_map<int,int> hash;
    
    //iterating the values in the array
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    
    //giving out number and frequency
    cout<<"repeated Number    frequency\n";
   
    for(auto it=hash.begin();it!=hash.end();it++)
    if(it->second>1)
    cout<<it->first<<"                  "<<it->second<<endl;
    
}

int main()
{
    //declaring size of an array
    int n;
    
    cout<<"enter array length\n";
    
    //taking input of size
    cin>>n;
    
    int* a=(int*)(malloc(sizeof(int)*n));
    
    //taking array elements input
    cout<<"input array elements...\n";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    //recursively calling the function
    findRepeat(a,n);

    return 0;
}