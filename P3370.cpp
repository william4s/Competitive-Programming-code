#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e4+10,P=131;
ull h[N],p[N];
ull a[N];
ull gethash(string s)
{
	ull ans=1;
	for (ll i=0;i<s.size();i++)
		ans=ans*P+s[i];
	return ans;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	string s;
	cin>>n;
	p[1]=1;
	for (ll i=0;i<n;i++)
	{
		cin>>s;
		a[i]=gethash(s);
		//cout<<s<<' '<<a[i]<<endl;
	}
	sort(a,a+n);
	ll ans=0;
	for(ll i=0;i<n;i++)
		if (a[i]!=a[i+1])
		{
			ans++;
		//	cout<<a[i]<<endl;
		}
	cout<<ans;
	return 0;
}



