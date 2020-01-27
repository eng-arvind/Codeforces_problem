#include<iostream>
using namespace std;
int main()
{
  int r,c;
  cin>>r;
  cin>>c;
  bool istrue=true;
  for(int i=1;i<=r;i++)
  {
    if(i%2!=0)
    {
    for(int j=0;j<c;j++)
     cout<<"#";
      cout<<endl;
     }
     else
     {
       if(istrue)
       {
         for(int j=0;j<c-1;j++)
          cout<<".";
          cout<<"#";
          istrue=false;
          cout<<endl;
       }
       else
       {
         cout<<"#";
         for(int j=1;j<c;j++)
          cout<<".";
          istrue=true;
          cout<<endl;
       }
     }
  }
  return 0;
}
