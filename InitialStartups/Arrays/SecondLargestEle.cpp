#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
      //Approach:1-> TC:O(NlogN) SC:O(1)
      sort(arr.begin(),arr.end());
      for(int i=n-1;i>=1;i--)
      {
          if(arr[i]!=arr[i-1])
          {
              return arr[i-1];
          }
      }

      return -1;

    //Approach:2->TC:O(N) SC:O(1) more than 1 traversal
    int flag=0,largest=INT_MIN,slargest=INT_MIN,smallest=INT_MAX,ssmallest=INT_MAX;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
            flag=1;
        }
        else if(arr[i]<ssmallest && arr[i]!=smallest)
        {
            ssmallest=arr[i];

        }
    }
   return flag==1?slargest:-1;

    //Approach3->TC:O(N) SC:O(1) single traversal

     int largest=INT_MIN,slargest=INT_MIN,smallest=INT_MAX,ssmallest=INT_MAX;
       

       for(int i=0;i<n;i++)
       {
           if(arr[i]>largest)
           {
               slargest=largest;
               largest=arr[i];
               
           }
           else if(arr[i]>slargest && arr[i]!=largest)
           {
               slargest=arr[i];
           }
           else if(arr[i]<smallest)
           {
               ssmallest=smallest;
               smallest=arr[i];
           }
           else if(arr[i]<ssmallest && arr[i]!=smallest)
           {
               ssmallest=arr[i];
           }
       }

       return slargest!=INT_MIN?slargest:-1;
}