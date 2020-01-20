#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  bool istrue=true;
  for(int i=0;i<n;i++)
  {
    if(a[i]==1)
    {
      cout<<"HARD"<<endl;
      istrue=false;
      break;
    }
  }
  if(istrue)
  cout<<"EASY"<<endl;
  return 0;
}
