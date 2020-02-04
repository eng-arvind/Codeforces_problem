#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
   {
     long long int n;
     cin>>n;
     long long int count=0;
     while(n>9)
     {
        count += ((n/10)*10);
        n= n%10+ (n/10);
     }
     cout<<count+n<<endl;
   }

  	return 0;
}
