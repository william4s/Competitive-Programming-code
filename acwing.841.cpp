#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e5+5,P=131;
ull h[N],p[N];
int n,m;
string str;
ull get(ll l,ll r)
{
	return h[r]-h[l-1]*p[r-l+1];
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    p[0]=1;
    cin>>n>>m;
    cin>>str;
	for (ll i=1;i<=n;i++)
	{
		h[i]=h[i-1]*P+str[i-1];
		p[i]=p[i-1]*P;
	}
	while(m--)
	{
		ll l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if (get(l1,r1)==get(l2,r2))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	
	return 0;
}



