#include<iostream>
using namespace std;
int main()
{
  long long int n,m;
  cin>>n>>m;
  long long int b=1,count=0;
  for(int i=0;i<m;i++)
  {
   long int a;
   cin>>a;
   if(b<=a)
   count += a-b;
   else
   count += (n-b)+a;
   b=a;
  }
  cout<<count<<endl;
  return 0;
}
