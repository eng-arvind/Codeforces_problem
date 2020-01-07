#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  bool flag=false;
  int count=0,a[]={4,7,44,47,74,77,444,447,474,744,747,777};
  for(int i=0;i<s.length();i++)
  {
    if(s.at(i)=='4' || s.at(i)=='7')
    {
      count++;
     }
  }
  for(int i=0;i<12;i++)
  {
    if(count==a[i])
    {
      flag=true;
    }
  }
  if(flag)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  return 0;
}
