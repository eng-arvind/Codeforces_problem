#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        char ch=str.at(i);
        if(isupper(ch))
        ch=ch+32;
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        continue;
        else
        cout<<"."<<ch;
    }
    return 0;
}
