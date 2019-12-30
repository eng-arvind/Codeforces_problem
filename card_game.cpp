#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int a1[k1],a2[k2];
    for(int i=0;i<k1;i++)
      cin>>a1[i];
    for(int i=0;i<k2;i++)
    cin>>a2[i];
     sort(a1,a1+k1);
     sort(a2,a2+k2);
     if(a1[k1-1]>a2[k2-1])
     cout<<"Yes"<<endl;
     else
     cout<<"No"<<endl;
  }
  return 0;
}
