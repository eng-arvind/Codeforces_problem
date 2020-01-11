#include<iostream>
using namespace std;
int main()
{
  double n;
  cin>>n;
  double a[int(n)];
  for(int i=0;i<n;i++)
  cin>>a[i];
  double sum=0;
  for(int i=0;i<n;i++)
  {
    double k=a[i]/100;
    sum += k;
  }
  double v_fraction=sum/n;
  cout.precision(12);
  cout<<fixed<<100*(v_fraction)<<endl;
  return 0;
}
