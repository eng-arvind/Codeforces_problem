#include<iostream>
#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int u=0,l=0;
  for(int i=0;i<s.length();i++)
  {
    if(isupper(s.at(i)))
    u++;
    else
    l++;
  }
  if(u>l)
  {
  transform(s.begin(),s.end(),s.begin(),::toupper);
  cout<<s<<endl;
  }
  else
  {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
  }
  return 0;
}
