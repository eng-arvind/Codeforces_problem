#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  cin.ignore();
  string st;
  getline(cin,st);
  stringstream ss(st);
  string word;
  long int max=0;
  while(ss>>word)
  {
    long int count=0;
    for(long int i=0;i<word.length();i++)
    {
      if(isupper(word[i]))
      count++;
    }
    if(max<count)
    max=count;
  }
  cout<<max<<endl;
  return 0;
}
