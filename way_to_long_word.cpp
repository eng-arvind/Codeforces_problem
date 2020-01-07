#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  string s;
  cin>>s;
    if(s.length()<11)
    {
    cout<<s<<endl;
     }
     else if(s.length()>=11)
     {
       cout<<s.at(0)<<s.length()-2<<s.at(s.length()-1)<<endl;
     }
}
return 0;
}
