#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[100]={0},l=0;
  string str;
  cin>>str;
  for(int i=0;i<str.length();i=i+2)
  {
    char ch;
    ch=str.at(i);
    arr[l++]=ch-'0';
  }
  int len=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+len);
  int i=0;
  while(arr[i]==0)
  {
    i++;
  }
  for(;i<len;i++)
  {
  if(i==len-1)
  cout<<arr[i];
  else  
  cout<<arr[i]<<"+";
   }
  return 0;
}
