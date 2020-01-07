#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 int a[n];
	 int sum=0,count=0;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 sum+=a[i];
	 }
	 sum=sum/2;
	 sort(a,a+n);
	 int s2=0;
	 for(int i=n-1;i>=0;i--){
		 s2+=a[i];
		 ++count;
		if(s2>sum){
		 	break;
		}
	 }
	 cout<<count;
	return 0;
}
