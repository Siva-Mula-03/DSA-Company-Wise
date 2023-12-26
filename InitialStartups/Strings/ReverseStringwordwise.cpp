#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    stringstream ss(input);
    string word;
    string news="";

    while(ss>>word)
    {
       
        news=word+" "+news;
    }

    if(!news.empty())
    {
        news.pop_back();
    }

    return news;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}