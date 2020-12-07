#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void Plus(ll x,ll *f[])
{
	ll len=1;
	int jw=0;
	for (ll i=1; i<=len; i++)
	{
		f[x][i]=jw+f[x-1][i]+f[x-2][i];
		jw=f[x][i]/10;
		f[x][i]=f[x][i]%10;
		if (f[x][len])
			len++;
	}

}
int main()
{
	ll i,j,n;
	while(cin>>n)
	{
		ll f[5500][5500]= {0};
		//cin>>n;
		f[1][1]=1;
		f[2][1]=2;
		for (i=3; i<=n; i++)
			Plus(i,&f[0][0]);
		//f[i]=f[i-1]+f[i-2];
		if (n!=0)
			while (f[n][len]==0) len--;
		for (int i=len; i>0; i--)
			cout<<f[n][i]<<"\n";
	}
	return 0;
}

