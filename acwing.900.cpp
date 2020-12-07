#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int m=550;
ll a[m][m],f[m][m];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,i,j,k,l;
	cin>>n;
	for (i=1; i<=n; i++)
		for(j=1; j<=i; j++)		
			cin>>a[i][j];
			
	for (i=n;i>=1;i--)
		for(j=1;j<=i;j++)
		f[i][j]=max(f[i+1][j+1],f[i+1][j])+a[i][j];
	cout<<f[1][1];
	return 0;
}


