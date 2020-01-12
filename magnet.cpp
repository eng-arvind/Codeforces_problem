#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int count=1;
  int c=a[0];
  for(int i=0;i<n;i++)
  {
    if(c==a[i])
    continue;
    else
    {
      c=a[i];
    count++;
     }
  }
  cout<<count<<endl;
  return 0;
}
