#include<iostream>
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long int a,b,c;
  a=n-(n-1);
  b=n-(n-1);
  c=n-(a+b);
  if(c%3==0)
  {
  c=c-1;
  b=b+1;
  }
  cout<<a<<" "<<b<<" "<<c<<endl;
  return 0;
}
