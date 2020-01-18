#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int even=0,e,odd=0,o;
  for(int i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
    even++;
    e=i;
      }
    else
    {
    odd++;
    o=i;
    }
  }
  if(even>odd)
  cout<<o+1<<endl;
  else
  cout<<e+1<<endl;
  return 0;
}
