#include<iostream>
using namespace std;
int sum(int a[],int i,int j)
{
  int s=0;
  for(int k=i;k<=j;k++)
  s=s+a[k];
  return s;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int t_max=0;
    for(int i=0;i<n;i++)
    t_max += a[i];
    int max=0;
    for(int i=0;i<n;i++)
    {
      int s_max;
      if(i==0)
      {
      for(int j=i;j<n-1;j++)
      {
       s_max=sum(a,i,j);
       }
     }
       else
       {
         for(int j=i;j<n;j++)
         {
          s_max=sum(a,i,j);
          }
       }
      if(s_max>=t_max)
      {
        max=1;
         break;
         }
         if(max==1)
         break;
      }
         if(max==0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
  }
  return 0;
}
