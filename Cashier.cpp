#include<iostream>
#define ll long long int
#include<vector>
using namespace std;
int main()
{
  ll n,L,a;
  cin>>n>>L>>a;
  vector<pair <int,int> > v;
  for(ll i=0;i<n;i++)
  {
    int t,l;
    cin>>t>>l;
    v.push_back(make_pair(t,l));
  }
  ll end=0,start=0;
  for(ll i=0;i<n;i++)
  {
    end += (v[i].first-start)/a;
    start=v[i].first + v[i].second;
  }
  end += (L-start)/a;
  cout<<end<<endl;
  return 0;

}
