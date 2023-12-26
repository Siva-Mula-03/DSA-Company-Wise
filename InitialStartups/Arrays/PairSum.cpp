#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.

	//Approach 1
	int cnt=0;
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		int req=target-arr[i];

		if(mp.find(req)!=mp.end())
		{
			cnt+=mp[req];
		}
		
			mp[arr[i]]++;
	}

	return cnt>0?cnt:-1 ;
    
	//Approach 2
	int cnt=0;
	int i=0;
	int j=n-1;

	while(i<j)
	{
		int sum=arr[i]+arr[j];

		if(sum==target)
		{
			cnt++;
			i++;
			j--;
		}
		else if(sum<target)
		{
			i++;
		}
		else{
			j--;
		}
	}

	return cnt>0?cnt:-1;
}