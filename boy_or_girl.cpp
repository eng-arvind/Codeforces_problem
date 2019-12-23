#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int arr[26]={0},count=0;
  for(int i=0;i<s.length();i++)
  {
      int ch=s.at(i)-'a';
      arr[ch]++;
  }
  for(int i=0;i<26;i++)
  {
    if(arr[i]==0)
    continue;
    else
    count++;
  }
  if(count%2==0)
  cout<<"CHAT WITH HER!"<<endl;
  else
  cout<<"IGNORE HIM!"<<endl;
  return 0;
}
