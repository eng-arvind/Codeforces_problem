#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#define ll long long
#define cel(n,k) ((n-1)/k+1)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    ll n,m,k,l;
    cin>>n>>m>>k>>l;
    if(n<m || (l+k)>n)
    {
        cout<<-1<<endl;
        return 0;
      }
    ll ans= cel(l+k,m);
    if(m*ans>n)
    cout<<-1<<endl;
    else
        cout<<ans<<endl;
    return 0;
  }
