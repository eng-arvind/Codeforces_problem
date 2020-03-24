#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define pb push_back
#define s second
#define f first
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll n,m;
      cin>>n>>m;
      vector<ll> v;
      for(ll i=0;i<n;i++)
      {
        ll a;
        cin>>a;
        v.pb(a);
      }
      sort(v.begin(),v.end());
      ll wyn=1;
	if (n>m)
		wyn=0;
	for (ll i=0; i<n && wyn; i++)
		for (int j=i+1; j<n && wyn; j++)
			wyn=(wyn*(v[j]-v[i]))%m;
      wyn%=m;
      printf("%lld\n", wyn);
      return 0;
    }
