#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
#define IOS ios::sync_with_stdio(false);
typedef long long ll;
int main(){

	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		bool pd=1;
		ll a[55];

		for (int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for (int i=0;i<n-1;i++)
		{
			if (a[i]==a[i+1])
				{
					pd=0;
					cout<<"NO\n";
					break;
				}
		}
		if (pd)
			cout<<"YES\n";
	}
	return 0;
}


