#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  if(x==0)
  {
    cout<<"0"<<endl;
  }
  else if(x>0 && x<=5)
  {
    cout<<"1"<<endl;
  }
  else if(x>5)
  {
    int q=x/5;
    if(x%5==0)
    cout<<q<<endl;
    else
    cout<<q+1<<endl;
  }
  return 0;
}
