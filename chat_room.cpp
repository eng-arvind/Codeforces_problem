#include <iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int i;
	int flag;
	int temp1=0,temp2=0,temp3=0,temp4=0,temp5=0;
	char a[105];
   cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='h')
		{
			flag=i+1;
			temp1=1;
			break;
		}
	}
	for(i=flag;a[i]!='\0';i++)
	{
		if(a[i]=='e')
		{
			flag=i+1;
			temp2=1;
			break;
		}
	}
	for(i=flag;a[i]!='\0';i++)
	{
		if(a[i]=='l')
		{
			flag=i+1;
			temp3=1;
			break;
		}
	}
	for(i=flag;a[i]!='\0';i++)
	{
		if(a[i]=='l')
		{
			flag=i+1;
			temp4=1;
			break;
		}
	}
	for(i=flag;a[i]!='\0';i++)
	{
		if(a[i]=='o')
		{
			flag=i+1;
			temp5=1;
			break;
		}
	}
	if(temp1==1&&temp2==1&&temp3==1&&temp4==1&&temp5==1)
	{
	cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
    return 0;
}
