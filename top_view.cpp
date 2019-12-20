#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long int n;
    cin>>n;
    long long int stack[100000],max[100000],x;
    long int top=-1,topm=0;
    for(long int i=0;i<n;i++)
        max[i]=0;

         for( long int i=0;i<n;i++ )
         {
             int q;    
             cin>>q;

             switch(q)
             {
                 case 1: cin>>x;
                         if(max[topm]<=x)
                         {
                         max[++topm]=x;
                         }
                         stack[++top]=x;
                         break;
                 case 2: if(max[topm]==stack[top])
                          --topm;
                         --top;
                         break;
                 case 3:
                         cout<<max[topm]<<endl;
                         break;
             }
         }


    return 0;
}
