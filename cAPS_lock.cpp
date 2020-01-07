#include<iostream>
#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
  string s;
  cin>>s;
  bool t=true;
  for(int i=1;i<s.length();i++)
  {
    char ch=s.at(i);
    if(isupper(ch))
    {
    continue;
    }
    else
    {
      cout<<s<<endl;
      t=false;
      break;
    }
  }
  if(t)
  {
    if(isupper(s[0]))
    {
    transform(s.begin(),s.end(),s.begin(),::tolower);
    s[0]=tolower(s.at(0));
    }
    else
    {
      transform(s.begin(),s.end(),s.begin(),::tolower);
      s[0]=toupper(s.at(0));
    }
    cout<<s<<endl;
  }
  return 0;
}
