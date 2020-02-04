#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
 while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]&1)
      count++;
     }
     if(count==n&&count%2==0)
     {
      cout<<"NO"<<endl;
     }
     else if(count==0)
     cout<<"NO"<<endl;
     else if(n%2==1&&count%2==1)
     cout<<"YES"<<endl;
     else if(count%2==1&&n%2==0)
     cout<<"YES"<<endl;
     else {
            cout<<"YES"<<endl;
          }
   }
  return 0;
}
