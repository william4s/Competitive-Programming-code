#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e4+5;
const int TT=1e8+5;
ll t[N],sum;
ll tim[TT]; 
int main()
{
	ios::sync_with_stdio(false); //�ر�ͬ��������cin,cout,��ʱ������scanf 
	cin.tie(0);
	cout.tie(0);
	ll n,T,dis,q;
	cin>>n>>dis;
	for (ll i=0; i<n; i++)
	{
		cin>>t[i];
	}
	bool pd=1;
	ll cnt=1;
	while(pd)
	{
		for (ll i=0;i<n;i++)
		{
			tim[cnt++]=dis;
			t[i]-=dis;
			if (t[i]<0) //�����õ���tim[i]Ϊ0���߸��� 
			{
				tim[cnt-1]+=t[i];
				t[i]=0;
			}
		}
		pd=0;
		for (ll i=0;i<n;i++)
			if (t[i]>0)
				pd=1;
	}
	for (ll i=1;i<=cnt;i++)
		tim[i]+=tim[i-1];

	cin>>q; 
	while(q--)
	{
		ll Q;
		cin>>Q;
		ll ans=upper_bound(tim+1,tim+cnt+1,Q)-tim-1;   //upper_bound�����õĶ���ģ�庯��������ֵΪһ����ַ 
		ans=ans%n;
		cout<<ans<<'\n';
	}
return 0;
}

