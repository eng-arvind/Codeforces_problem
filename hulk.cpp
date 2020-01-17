#include<iostream>
using namespace std;
int main()
{
  int n,z;
  cin>>n;
  if(n==1)
  cout<<"I hate it";
  else
  {
    for(int i=1;i<=n;i++)
    {
      z=i;
      if(z%2!=0)
      cout<<"I hate";
      else
      cout<<"I love";
      if(i!=n)
      cout<<" that ";
    }
    cout<<" it";
  }
  return 0;
}
