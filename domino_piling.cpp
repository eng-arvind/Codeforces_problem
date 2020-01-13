#include<iostream>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
    int r=0;
  if(m%2==0)
  {
    r=m/2;
    cout<<r*n;
  }
  else
  {
    r=m/2;
  cout<<r*n+(n/2)<<endl;
  }
  return 0;
}
