#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const int N = 1000000+10;
int ne[N];
int n, m;
string p, s;

int main()
{
	ios::sync_with_stdio(false);
	cin >> p ;
	n=p.size();
	for(int i = 1, j = 0; i < n; i ++)
	{
		while(j && p[i] != p[j]) j = ne[j - 1];
		if(p[i] == p[j]) j ++;
		ne[i] = j;
	}
//	for (ll i=0;i<n;i++)
//		cout<<ne[i]<<' ';


		cout<<n-ne[n-1];


	return 0;

}

