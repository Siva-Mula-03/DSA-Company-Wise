#include <bits/stdc++.h> 
int minimumParentheses(string pat) {
  int n=pat.size();
  stack<int>s;
   int count=0;
  for(int i=0;i<n;i++)
  {
      if(pat[i]=='(')
      {
          s.push(pat[i]);
      }
      else if(!s.empty() && pat[i]==')')
      {
          s.pop();
      }
      else if(s.empty()&& pat[i]==')')
      {
          count++;
      }

  }

  return s.size()+count;

}