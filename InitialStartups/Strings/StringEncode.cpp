#include <bits/stdc++.h> 
string encode(string &s)
{
     int n=s.size();
     unordered_map<int,int>mp;
     string ans="";
    

     for(int i=0;i+1<n;i++)
     {
         if(i+1<n && s[i]==s[i+1])
         {
             mp[s[i]]++;
         }
         else
         {
             mp[s[i]]++;
              ans+=s[i]+to_string(mp[s[i]]);
              mp.erase(s[i]);
            
         }

     }
    
     ans+=s[n-1];
     
      if(mp[s[n-1]]>0)
      {
            ans+=to_string(1+mp[s[n-1]]);
      }
      else{
          ans+=to_string(1);
      }

     
   
     return ans;
  
}