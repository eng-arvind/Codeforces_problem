#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char c[n];
  cin>>c;
  int l=0,r=0;
  for(int i=0;i<n;i++)
  {
    if(c[i]=='L')
    l++;
    else
    r++;
  }
  cout<<r+l+1<<endl;
  return 0;
}
