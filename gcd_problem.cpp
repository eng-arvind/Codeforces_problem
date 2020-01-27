#include<iostream>
using namespace std;
int gcd(int a,int b){
  if(b==0)
  return a;
  return gcd(b,a%b);
}
int main()
{
  int a;
  cout<<"Enter number"<<endl;
  cin>>a;
  int count=0;
  for(int i=1;i<a;i++)
  {
    int b=gcd(i,a);
    if(b==1)
    count++;
  }
  cout<<count<<endl;
  return 0;
}
