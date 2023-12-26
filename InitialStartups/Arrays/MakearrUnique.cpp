#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	// Write your code here.
	int n=arr.size();
	unordered_set<int>s;
	for(auto i:arr)
	{
		s.insert(i);
	}

	return n-s.size();
}