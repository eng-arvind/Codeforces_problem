#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int n_start=s.find('1');
    if(n_start==-1)
    n_start=0;
    string s1=s;
    reverse(s1.begin(),s1.end());
    int n_end=s1.find('1');
    if(n_end==-1)
    n_end=0;
    else
    n_end=s.length()-n_end;
    int count=0;
    for(int i=n_start;i<n_end;i++)
    {
      if(s[i]=='0')
      count++;
    }
    cout<<count<<endl;
  }
}
