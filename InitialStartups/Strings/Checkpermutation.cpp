#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.

    //Approach 1
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    return str1==str2;

    //Approach 2
    int n1=str1.size();
    int n2=str2.size();
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;

    for(int i=0;i<max(n1,n2);i++)
    {
        mp1[str1[i]]++;
        mp2[str2[i]]++;
    }
    for(int i=0;i<n1;i++)
    {
        if(mp1[str1[i]]!=mp2[str1[i]])
        {
            return false;
        }
    }

    return true;
}