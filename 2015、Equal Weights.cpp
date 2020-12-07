#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool v[2000005];
ll a[5005],b[5005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;

	ll n,m;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(ll i=0; i<n; i++)	cin>>a[i];
		for(ll i=0; i<m; i++)	cin>>b[i];
		memset(v,false,sizeof(v));
		bool pd=false;
		for(ll i=0;i<n;i++)
			for(ll j=0;j<m;j++)
			{
				if(v[a[i]+b[j]]==true)
				{
					pd=true;
					break;
				}
				v[a[i]+b[j]]=true;
			}
		if(pd==true)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n"; 
	} 



	return 0;
}

