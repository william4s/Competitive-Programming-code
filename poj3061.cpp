#include <iostream>//sycOJ1265 
#include <string.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <math.h>
#include <cstdio>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll a[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll j=0,n,s,res=INF,sum=0;
		cin>>n>>s;
		for (ll i=0;i<n;i++)	cin>>a[i];
		for (ll i=0;i<n;i++)
		{
			if (i>0)
				sum-=a[i-1];
			while(sum<s&&j<n)
			{
				sum+=a[j++];
			}
			if (sum>=s)
				res=min(res,j-i);
		}
		if (res==INF)
			cout<<"0\n";
		else
			cout<<res<<'\n';
	}
	return 0;
}


