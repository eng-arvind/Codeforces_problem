#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	int i,n;
	while(t--){
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		bool right=0;
		for(i=1;i<n;i++){
			if(abs(a[i]-a[i-1])>1){
				right=1;
				break;
			}
		}
		if(right){
			cout<<"YES"<<endl;
			cout<<i<<" "<<i+1<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
