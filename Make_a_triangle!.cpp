#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll a[3];
    cin>>a[0];
    cin>>a[1];
    cin>>a[2];
    sort(a,a+3);
    ll k=(a[2]+1)-(a[1]+a[0]);
    if(k<0)
    cout<<0<<endl;
    else
    cout<<k<<endl;
    return 0;
  }
