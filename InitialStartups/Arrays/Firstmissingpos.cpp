#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
     sort(arr,arr+n);
     bool onee=false;
     for(int i=0;i<n;i++)
     {
           if(arr[i]==1) onee=true;

           if(arr[i]>0)
           {
               if(arr[i]+1==arr[i+1])
               {
                   continue;
               }

               return onee?arr[i]+1:1;
           }
     }

     return onee?arr[n-1]:1;
}