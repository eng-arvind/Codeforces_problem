#include <iostream>
#include<bits/stdc++.h>
#include <set>
#include <iterator>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  set<char> s1;
  for(int i=0;i<s.length();i++)
  {
    if(isalpha(s[i]))
    s1.insert(s[i]);
  }
   set<char>::iterator itr;
   cout<<s1.size()<<endl;
  return 0;
}
