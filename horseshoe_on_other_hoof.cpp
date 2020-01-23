#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
  int s1,s2,s3,s4;
  cin>>s1>>s2>>s3>>s4;
  set<int> a;
  a.insert(s1);
  a.insert(s2);
  a.insert(s3);
  a.insert(s4);
int l=a.size();
  cout<<4-l<<endl;
  return 0;
}
