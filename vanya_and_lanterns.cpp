#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l;
  cin>>n>>l;
 long long int a[n];
  for(long int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  double max=0;
  for(long int i=0;i<n-1;i++)
  {
  int m=a[i+1]-a[i];
  if(m>max)
  max=m;
  }
  if(a[0]!=0)
  {
    if(a[0]*2>max)
    max=a[0]*2;
  }
  if(a[n-1]!=l)
  {
  long int t=(l-a[n-1])*2;
    if(t>max)
    max=t;
  }
  cout.precision(10);
  cout<<fixed<<max/2<<endl;
  return 0;
}
