#include<iostream>
using namespace std;
int main()
{
  int k,m,n,l,d;
  cin>>k>>l>>m>>n>>d;
  if(k==1 || l==1 || m==1 || m==1 || n==1)
  cout<<d<<endl;
  else
  {
    int count=0;
    for(int i=1;i<=d;i++)
    {
      if(i%k==0 ||i%l==0 ||i%m==0 ||i%n==0)
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
