#include <iostream> //poj专属头文件 
#include <string.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <math.h>
#include <cstdio>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+5;
ll a[N],b[N];
int main()
{
//	ios::sync_with_stdio(false);   //POJ这道题只能用scanf，不然会超时 
//	cin.tie(0);
//	cout.tie(0);
	ll p;
	cin>>p;
	set<int> all;
	for (ll i=1; i<=p; i++)
	{
		scanf("%lld",&a[i]);
		all.insert(a[i]);
	}
	ll n=all.size(),num=0;
	map<ll,ll> cnt;
	ll i=1,j=1,res=p;
	while(1)
	{
		while(j<=p&&num<n)
		{
			if (cnt[a[j++]]++==0)
				num++;

		}
		if (num<n) break;
		res=min(res,j-i);
		if (--cnt[a[i++]]==0)
		{
			num--;
		}
		
	}
	printf("%lld",res);

	return 0;
}
