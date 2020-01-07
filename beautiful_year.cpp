#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int w,x,y,z;
    while(1)
    {
      n++;
      w=n/1000;
      x=(n%1000)/100;
      y=(n%100)/10;
      z=n%10;
      if(w!=x && w!=y && w!=z && x!=y && x!=z && y!=z)
      break;
    }
    cout<<n<<endl;
    return 0;
}
