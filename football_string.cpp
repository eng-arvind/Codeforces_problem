#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[100];
  int count=0;
  cin>>s;
  if(sizeof(s)/sizeof(0)<=7)
  {
  cout<<"NO";
  }
  else
  {
    int size=sizeof(s)/sizeof(char);
    if(s[0]=s[1])
    {
  for(int i=0;i<size-7;i++)
    {
      count=0;
    for(int j=i+1;j<size;j++)
    {
      if(s[j]==s[j+1])
      count++;
      else
      continue;
    }
    if(count==6)
    {
    cout<<"YES"<<endl;
    break;
     }
    }
    if(count!=6)
    cout<<"NO"<<endl;
  }
  return 0;
}
