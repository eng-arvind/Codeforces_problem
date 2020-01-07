#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void fun(int a[],int n,int a1[],int r,int l,int i)
{
  if(l==r)
  {
    for(int i=0;i<r;i++)
    cout<<a1[i]<<" ";
    cout<<endl;
    return;
  }
  if(i>=n)
  return;
  a1[l]=a[i];
  fun(a,n,a1,r,l+1,i+1);
  fun(a,n,a1,r,l,i+1);
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int r;
  cin>>r;
  int a1[r]={0};
  fun(a,n,a1,r,0,0);
  return 0;
}
