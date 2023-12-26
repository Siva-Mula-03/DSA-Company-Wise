#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.

    int n=arr.size(),ans=INT_MIN;
    int cnt=count(arr.begin(),arr.end(),0);
    if(cnt==n) return 0;
    int totsum=accumulate(arr.begin(),arr.end(),0);
    int suml=0;
    arr[-1]=0;


    for(int i=0;i<n;i++)
    {
    
        suml+=arr[i-1];
        if(totsum-suml-arr[i]==suml)
        {   
           
           return i;
           break;
            
        }
    }

    return -1;
}