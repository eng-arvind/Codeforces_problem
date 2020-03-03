#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#define pb push_back
#define s second
#define f first
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin>>t;
      while(t--)
      {
        ll n;
        cin>>n;
        ll a[n]={0},b[n]={0};
        for(ll i =0;i<n;i++)
        cin>>a[i];
        for(ll i=0;i<n;i++)
        cin>>b[i];
         sort(a,a+n);
         sort(b,b+n);
         for(ll i=0;i<n;i++)
         cout<<a[i]<<" ";
         cout<<endl;
         for(ll i=0;i<n;i++)
         cout<<b[i]<<" ";
         cout<<endl;
      }
    return 0;
  }
