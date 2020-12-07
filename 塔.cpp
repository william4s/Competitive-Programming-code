#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans,sum;
ll cube(ll x)
{
	return x*x*x;
}
void dfs(ll m,ll cont,ll Max)
{
	if (m==0)
	{
		if (cont>ans||(cont==ans&&Max>sum))
		{
			ans=cont;
			sum=Max;
		}
		return ;
	}

	ll t=floor(pow(m,1/3.0));
	dfs(m-cube(t),cont+1,Max+cube(t));
	dfs(cube(t)-1,cont,Max);
}
int main()
{
	ll m;
	cin>>m;

	dfs(m,0,0);
	cout<<ans<<' '<<sum;

	return 0;
}

