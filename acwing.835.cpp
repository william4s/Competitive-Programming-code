#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5; 
ll tr[N][26],cnt[N],idx;//���������Ŀ���ı�26�Ĵ�С 

void insert(string s)//���� 
{
	ll p=0;
	for (ll i=0;i<s.size();i++)
	{
		ll u=s[i]-'a';
		if (!tr[p][u]) tr[p][u]=++idx;  //number zero used for root!
		p=tr[p][u];
	}
	cnt[p]++;
}
ll query(string s)//��ѯ 
{
	ll p=0;
	for (ll i=0;i<s.size();i++)
	{
		ll u=s[i]-'a';
		if (!tr[p][u])	return 0;
		p=tr[p][u];
	}
	return cnt[p];
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	while(n--)
	{
		string q,s;
		cin>>q>>s;
		if (q=="I")
		{
			insert(s);
		}
		else
		{
			cout<<query(s)<<"\n";
		}
		
	}
	return 0;
}



