#include<iostream>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str1,str2;
  cin>>str1;
  cin>>str2;
  transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
  transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
  if(str1==str2)
  cout<<"0"<<endl;
  else
  {
  for(int i=0;i<str1.length();i++)
  {
       if(str1.at(i)==str2.at(i))
       continue;
       else if(str1.at(i)<str2.at(i))
       {
       cout<<"-1"<<endl;
       break;
     }
       else
       {
       cout<<"1"<<endl;
       break;
     }
     }

  }
}
