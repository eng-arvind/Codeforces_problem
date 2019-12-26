#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
#include<algorithm>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<string>
#define ll long long
#define dd double
using namespace std;
int main()
{
	string s;
	cin >> s;
	ll flag = 0;
	for (ll i = 0; i < s.size(); i++) {
		if (flag == 0) {
			if (s[i] == 'h' || s[i] == 'H') {
				flag = 1;
			}
		}
		else if (flag == 1) {
			if (s[i] == 'e' || s[i] == 'E') {
				flag = 2;
			}
		}
		else if (flag == 2) {
			if (s[i] == 'l' || s[i] == 'L') {
				flag = 3;
			}
		}
		else if (flag == 3) {
			if (s[i] == 'l' || s[i] == 'L') {
				flag = 4;
			}
		}
		else if (flag == 4) {
			if (s[i] == 'o' || s[i] == 'O') {
				flag = 5;
			}
		}
	}
	if (flag == 5) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
