#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
      int sorted=0;

      for(int i=0;i<n-1 && sorted==0;i++)
      {
          sorted=1;
          for(int j=0;j<n-i-1;j++)
          {
              if(arr[j]>arr[j+1])
              {
                  swap(arr[j],arr[j+1]);
                  sorted=0;
              }
          }
      }

}
