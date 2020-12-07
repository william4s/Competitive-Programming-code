#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=2e5+10;
struct  stu
{
	ll pos,val;
}q[N];
ll n,w,minn=INF,maxn=-INF;
bool cmp(stu a,stu b)
{
	return a.pos<b.pos;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>w;
	vector<stu> v;
	for (ll i=0; i<n; i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		stu q,w;
		q.pos=a;q.val=c;
		w.pos=b;w.val=-c;
		v.push_back(q);
		v.push_back(w);
	}
	sort(v.begin(),v.end(),cmp);
	ll sum=0;
	for (auto i=v.begin();i!=v.end();i++)
	{
		sum+=(*i).val;
		if (sum>w)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}



