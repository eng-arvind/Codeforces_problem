#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,count=0;
  string str;
  cin>>n;
  cin>>str;
  char s=' ';
  for(int i=0;i<n;i++)
  {
   char ch=str.at(i);
    if(ch==s)
    count+=1;
    else
    s=ch;
  }
  cout<<count<<endl;
  return 0;
}
