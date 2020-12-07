#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll a[N],vis[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	for (ll i=0;i<n;i++)	cin>>a[i];
	ll i,j,res=0;
	for (i=0,j=0;i<n;i++)
	{
		vis[a[i]]++;
		while (vis[a[i]]>1)
		{
			vis[a[j]]--;
			j++;
		}
		res=max(res,i-j+1);
	}
	cout<<res;
	
	return 0;
}


