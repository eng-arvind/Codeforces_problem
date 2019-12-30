#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
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
    int* max=max_element(a,a+n);
    int* min=min_element(a,a+n);
    if((*max-*min)<n)
    cout<<"NO"<<endl;
    else
    {
      cout<<"YES"<<endl;
      int l=*max;
      int r=*min;
      int i,j;
      for(i=0;i<n;i++)
      {
        if(a[i]==r)
          break;
      }
      for(j=0;j<n;j++)
      {
        if(a[j]==l)
          break;
      }
      cout<<i<<" "<<j+1<<endl;
    }
  }
  return 0;
}
