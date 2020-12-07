#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll a,b,c,d,ans=0;
	cin>>a>>b>>c>>d;
	for (ll i=0;i<=a;i++)
		for (ll j=0;j<=b;j++)
			for(ll k=0;k<=c;k++)
				for (ll l=0;l<=d;l++)
					if (i+j+k==l)
					{
							cout<<i<<' '<<j<<' '<<k<<' '<<l<<endl;
							ans++;
					}
						
	cout<<"ans:"<<ans;
	return 0;
}



