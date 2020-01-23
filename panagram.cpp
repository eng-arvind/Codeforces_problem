#include<iostream>
#include<bits/stdc++.h>
#include<cctype>
#include<set>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string c;
  cin>>c;
  transform(c.begin(),c.end(),c.begin(),::tolower);
     set<char> s;
     for(int i=0;i<n;i++)
     {
       s.insert(c[i]);
     }
     int count=s.size();
     if(count==26)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
     return 0;
  }
