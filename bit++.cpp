#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x=0;
  while(n--)
  {
    string s;
    cin>>s;
    if(s=="++X")
     ++x;
    else if(s=="--X")
    --x;
    else if(s=="X++")
    x++;
    else if(s=="X--")
    x--;
  }
  cout<<x<<endl;
}
