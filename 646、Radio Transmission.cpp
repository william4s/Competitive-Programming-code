#include <bits/stdc++.h>
using namespace std;
const int N =1e6+5;
typedef long long ll;
int ne[N];
int n, m;
string p, s;

int main()
{
	cin >> n >> p ;


	for(int i = 1, j = 0; i < n; i ++)
	{
		while(j && p[i] != p[j]) j = ne[j - 1];
		if(p[i] == p[j]) j ++;
		ne[i] = j;
	}
	cout<<n-ne[n-1];
	return 0;

}
