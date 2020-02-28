#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  ll w,k,h;
  cin>>w>>k>>h;
  ll s=0;
  for(int i=1;i<=h;i++)
{
  s += (2*w) + (2*(k-2));
  w = w-4;
  k = k-4;
}
cout<<s<<endl;
  return 0;
}
