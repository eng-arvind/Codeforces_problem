#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int min=INT_MAX,max=0,l,r;
  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
      r=i;
    }
    if(a[i]<=min)
    {
      min=a[i];
      l=i;
    }
  }
  if(l>r)
  cout<<((n-l)+r)-1<<endl;
  else
  cout<<((n-l)+r)-2<<endl;
  return 0;
}
