#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool sortby(const pair<int,int> a,const pair<int,int> b)
{
  return a.first>b.first;
}
int main()
{
  long long int n;
  cin>>n;
  vector<pair <int,int> > v;
  for(int i=0;i<n;i++)
  {
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }
  sort(v.begin(),v.end(),sortby);
  int max=0;
  for(int i=0;i<n;i++)
  {

     if(max<(v[i].first+v[i].second))
     max=v[i].first+v[i].second;
   }
   cout<<max<<endl;
  return 0;
}
