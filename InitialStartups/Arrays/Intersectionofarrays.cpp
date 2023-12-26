#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	//Approach 1
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr1[i]]++;
	}
	vector<int>ans;

	for(int i=0;i<m;i++)
	{
		if(mp.find(arr2[i])!=mp.end() && mp[arr2[i]]>0)
		{
				ans.push_back(arr2[i]);
				mp[arr2[i]]--;
		}
	}

	return ans;

	//Approach 2
     vector<int>res;

	 int i=0,j=0;

	 while(i<n && j<m)
	 {
		 if(arr1[i]<arr2[j])
		 {
			 i++;
		 }
		 else if(arr2[j]<arr1[i])
		 {
			 j++;
		 }
		 else
		 {
			 res.push_back(arr1[i]);
			 i++;
			 j++;
		 }
	 }

	 return res;

}