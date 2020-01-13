#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int count=0,max_score;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  max_score=a[k-1];
  sort(a,a+n);
   for(int i=0;i<n;i++)
   {
     if(a[i]>=max_score)
     {
       if(a[i]!=0)
       count++;
     }
     else
     continue;
   }
   cout<<count<<endl;
  return 0;
}
