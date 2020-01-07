#include<iostream>
#include<string>
using namespace std;
int main()
{
  char s[101]={0};
  cin>>s;
  bool istrue=true;
  for(int i=0;i<100;i++)
  {
    if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
    {
    cout<<"YES"<<endl;
    istrue=false;
    break;
  }
  else if(s[i]=='+')
  {
    continue;
  }
  }
  if(istrue)
  cout<<"NO"<<endl;
  return 0;
}
