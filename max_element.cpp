#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  int *i1=max_element(arr,arr+n);
  int *i2=min_element(arr,arr+n);
  cout<<*i1<<" "<<*i2;
  return 0;
}
