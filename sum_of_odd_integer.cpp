#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      if (n-(k*k)>=0 && (n-(k*k))%2==0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
  }
