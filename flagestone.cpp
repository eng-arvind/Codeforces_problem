#include<iostream>
using namespace std;
int main()
{
long int n,m,a,count1=0,count2=0;
cin>>n;
cin>>m;
cin>>a;
if(n>=1 && m>=1 && a>=1)
{
if(m%a==0)
count1=m/a;
else
count1=(m/a)+1;
if(n%a==0)
count2=n/a;
else
count2=(n/a)+1;
cout<<count1*count2<<endl;
}
return 0;
}
