#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     long long  int x,y,n,s,c=0;
     cin>>x>>y>>n>>s;
     if(s%n<=y && x*n+y>=s)
    cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
  }
  return 0;
}
