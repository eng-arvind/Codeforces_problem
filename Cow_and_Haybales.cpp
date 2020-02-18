#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin>>t;
  while(t--)
  {
  long long int n,d;
    cin>>n>>d;
    long long int a[n];
    for(long int i=0;i<n;i++)
    cin>>a[i];
    while(d--)
    {
      for(long int i=1;i<n;i++)
      if(a[i]>0)
      {
        a[i]--;
        a[i-1]++;
        break;
      }
    }
    cout<<a[0]<<endl;
  }
}
