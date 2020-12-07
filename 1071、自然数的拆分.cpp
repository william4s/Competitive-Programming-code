#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
ll ans;
ll n;
ll a[110][110];
ll  dfs(ll n,ll m)
{
	if (a[n][m])
		return a[n][m];
	if (n<1||m<1)
		return 0; 
	if (n==1||m==1)
		return 1;
	if (m>n)
		a[n][m]=dfs(n,n);
	if (m==n)
		a[n][m]=dfs(n,n-1)+1;
	if (n>m) a[n][m]=(dfs(n,m-1)+dfs(n-m,m));
	return a[n][m];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	if (n==0)
	{
		cout<<1;
		return 0;
	}
	cout<<dfs(n,n);

	return 0;
}
