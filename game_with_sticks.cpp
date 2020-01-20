#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int c=0;
    while(n>0 && m>0)
    {
      c++;
      n--;
      m--;
    }
    if(c%2!=0)
  cout<<"Akshat"<<endl;
  else
  cout<<"Malvika"<<endl;
  return 0;
}
