#include<bits/stdc++.h>

int bs(int low,int high,int *arr,int n,int key)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
         //ls
        else if(arr[low]<=arr[mid])
        {
            if(key>=arr[low]&& key<=arr[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //rs
        else{

            if(key>=arr[mid] && key<=arr[high])
            {
                low=mid+1;
            }
            else{
            high=mid-1;
            }
        }
    }

    return -1;
}

int search(int* arr, int n, int key) {
    // Write your code here.

     return bs(0,n-1,arr,n,key);
}