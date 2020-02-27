#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
     ll L,v,l,r;
     cin>>L>>v>>l>>r;
     ll tl=L/v;
     tl = tl+(l-1)/v;
     tl = tl-(r/v);
     cout<<tl<<endl;
   }
  return 0;
}
