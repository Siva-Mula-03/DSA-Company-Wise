vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
     
     //Approach1
     vector<int>rotatedarr(n);
      
      for(int i=0;i<n;i++)
      {
          rotatedarr[(i-k+n)%n]=arr[i];
      }


      return rotatedarr;

    //Approach2
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    return arr;
}
