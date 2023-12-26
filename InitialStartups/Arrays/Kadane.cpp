#include <bits/stdc++.h> 

long long int  maxSubarraySum(int arr[], int n)
{

    long long curr=0;
    long long maxsum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        curr+=arr[i];
        if(curr<0)
        {
            curr=0;
        }
        maxsum=max(maxsum,curr);
    }

    return maxsum;
}