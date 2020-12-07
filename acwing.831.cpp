#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e5+5;
ll ne[N];
ll n,m;
string p,s;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n>>p>>m>>s;
	for (ll i=1,j=0;i<n;i++)
	{
		while(j&&p[i]!=p[j]) j=ne[j-1];
		if (p[i]==p[j]) j++;
		ne[i]=j;
	}
	for (ll i=0;i<n;i++)
		cout<<ne[i]<<' ';
	for (ll i=0,j=0;i<m;i++)
	{
		while(j&&s[i]!=p[j]) j=ne[j-1];
		if (s[i]==p[j])
		{
			j++;
			if (j==n)
			{
				//cout<<i-n+1<<' ';
				j=ne[n-1];
			}
		}
		
	}
	
	
	return 0;
}



