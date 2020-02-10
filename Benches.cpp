#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int m;
  cin>>m;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int mx = *max_element(a,a+n);
  for(int i = 0; i<m; i++)
  {
    int pos = -1;
    for (int j = 0; j < n; j++)
    {
        if (pos == -1 || a[j] < a[pos])
            pos = j;
    }
    if(pos != -1)
        a[pos]++;
    }
    int mn = *max_element(a,a+n);
    cout<<mn<<" "<<mx+m<<endl;
  return 0;
}
