#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
ll a[N],p[N],q[N];
ll n,k;
void minn()
{
	ll head=1,tail=0;
	for (ll i=1; i<=n; i++)
	{
		while(head<=tail&&q[tail]>=a[i])
			tail--;
		q[++tail]=a[i];
		p[tail]=i;
		while(p[head]<=i-k)
			head++;
		if (i>=k)
			cout<<q[head]<<' ';

	}
	cout<<"\n";

}
void maxx()
{
	ll head=1,tail=0;
	for (ll i=1; i<=n; i++)
	{
		while(head<=tail&&q[tail]<=a[i])
			tail--;
		q[++tail]=a[i];
		p[tail]=i;
		while(p[head]<=i-k)
			head++;
		if (i>=k)
			cout<<q[head]<<' ';
		
	}
	cout<<"\n";


}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack<ll> st;
	cin>>n>>k;
	for(ll i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	minn();
	maxx();
	return 0;
}



