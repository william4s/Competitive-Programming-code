#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll a,b;
	cin>>a>>b;
	for (ll n=1;n<=b/n;n++)
	{
		ll m=a-n;
		if (m>=1&&n*m==b)
		{
			//cout<<n<<' '<<m<<endl;

			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}



