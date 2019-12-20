#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  cin>>str;
  if(isupper(str[0]))
  cout<<str;
  else
  {
  str[0]=(str.at(0))-32;
  cout<<str<<endl;
   }
  return 0;

}
