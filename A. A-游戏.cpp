#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m,ans=0;
	cin>>n>>m;
	ll t=ceil(n*1.0/2.0+0.5);
	if (m<t)
		cout<<m+1;
	else
		cout<<m-1;
	return 0;
}



