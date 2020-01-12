#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[m];
  for(int i=0;i<m;i++)
  cin>>a[i];
  sort(a,a+m);
  int min=INT_MAX;
  for(int i=0;i<=m-n;i++)
  {
    int a1=a[i];
    int a2=a[i+(n-1)];
    if(min>(a2-a1))
    min=a2-a1;
  }
  cout<<min<<endl;
  return 0;
}
