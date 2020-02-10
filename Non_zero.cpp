#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count=0,sum=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==0)
      {
      a[i]++;
      count++;
      }
    }
    for(int i=0;i<n;i++)
    sum +=a[i];
    if(sum==0)
    cout<<count+1<<endl;
    else
    cout<<0+count<<endl;
  }
  return 0;
}
