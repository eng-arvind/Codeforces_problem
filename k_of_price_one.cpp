#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,p,k;
    cin>>n>>p>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
      cin>>ar[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
      if(p<ar[i] && i==0)
      break;
      else if(p>ar[i])
      {
        count++;
        p=p-ar[i];
      }
    else if(p==ar[i])
      {
        count=count+k;
        p=p-ar[i];
        break;
      }
      else if(p<ar[i] && i!=0 && p<ar[i+1])
      {
        count=count+1;
        p=p-ar[i];
        break;
      }
      else if(p<ar[i] && p>ar[i+1])
      {
        count=count+2;
        p=p-ar[i];
        break;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
