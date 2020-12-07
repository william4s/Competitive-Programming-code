#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main()
{
	cin >> t;
	while (t--)
	{
		int sum = 0;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
			sum += s[i] - '0';
		if (sum % 9!=0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}
