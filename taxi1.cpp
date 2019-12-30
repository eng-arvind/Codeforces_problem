 #include <stdio.h>
 #include <string.h>
 #include <iostream>
 #include <algorithm>
 #include <math.h>
 #include <limits.h>
 #include <map>
 #include <stack>
 #include <queue>
 #include <vector>
 #define ll long long
 #define ms(a) memset(a,0,sizeof(a))
 #define pi acos(-1.0)
 #define INF 0x3f3f3f3f
 const double E=exp(1);
 const int maxn=1e6+10;
 using namespace std;
 int a[maxn];
 int vis[5];
 int main(int argc, char const *argv[])
 {
     ios::sync_with_stdio(false);
     int n;
    ms(vis);
     cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
         vis[a[i]]++;
     }
     int ans=vis[4];
     if(vis[3]>=vis[1])
     {
         ans+=vis[3];
         ans+=(vis[2]+1)/2;
     }
    else
     {
         ans+=vis[3];
         vis[1]-=vis[3];
         if(vis[2]%2)
         {
             ans+=(vis[2]+1)/2;
             if(vis[1]>2)
             {
                 vis[1]-=2;
                 if(vis[1]%4)
                     ans=ans+vis[1]/4+1;
                 else
                     ans=ans+vis[1]/4;
            }
        }
         else
         {
             ans+=vis[2]/2;
            ans+=vis[1]/4;
            if(vis[1]%4)
                 ans++;
         }
     }
     cout<<ans<<endl;
     return 0;
 }
