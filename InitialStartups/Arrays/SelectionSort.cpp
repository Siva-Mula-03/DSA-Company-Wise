#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.

     int mini,loc;

     for(int i=0;i<n-1;i++)
     {
         mini=arr[i];
         loc=i;

         for(int j=i+1;j<n;j++)
         {
             if(arr[j]<mini)
             {
                 mini=arr[j];
                 loc=j;
             }
         }

         arr[loc]=arr[i];
         arr[i]=mini;
     }
}