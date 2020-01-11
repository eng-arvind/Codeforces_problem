#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  int max=0;
  int k1=a+b*c;
  if(max<k1)
  max=k1;
  int k2=a*(b+c);
  if(max<k2)
  max=k2;
  int k3=a*b*c;
  if(max<k3)
  max=k3;
  int k4=(a+b)*c;
  if(max<k4)
  max=k4;
  int k5=a+b+c;
  if(max<k5)
  max=k5;
  cout<<max<<endl;
  return 0;

}
