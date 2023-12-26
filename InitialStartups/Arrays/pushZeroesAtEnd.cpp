void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
    vector<int>res;
	int count=0;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]!=0)
		{
			res.push_back(arr[i]);
		}
		else
		{
			count++;
		}
	}

	for(int i=0;i<count;i++)
	{
		res.push_back(0);
	}
    
	  for(int i=0;i<res.size();i++)
	  {
		  arr[i]=res[i];
	  }
	

}