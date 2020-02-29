#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
#define ll unsigned long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0), cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll a[100000]={0};
      ll n;
      cin>>n;
      int i=0;
      while(n>0)
      {
        a[i]=n%2;
        n = n/2;
        i++;
      }
      ll count=0;
      for(int j=0;j<i;j++)
      {
        if(a[j]==1)
        count++;
      }
      cout<<int(pow(2,count))<<endl;
    }
    return 0;
  }
