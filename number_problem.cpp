#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int max=INT_MIN,min=INT_MAX,m=n;
  while(m>0)
  {
    int p=m%10;
    if(max<p)
     max=p;
    if(min>p)
    min=p;
    m=m/10;
  }
  cout<<"high="<<max<<endl;
  cout<<"low="<<min<<endl;
  return 0;
}
