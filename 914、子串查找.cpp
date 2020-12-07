#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=1e6+5;
typedef long long ll;
ll ne[N];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	string s,p;
	ll ans=0;
	cin>>s>>p;
	ll n=p.size(),m=s.size();
	for (ll i=1,j=0;i<n;i++)
	{
		while(j&&p[i]!=p[j]) j=ne[j-1];
		if (p[i]==p[j])	j++;
		ne[i]=j;	
	}
	for (ll i=0,j=0;i<m;i++)
	{
		while(j&&s[i]!=p[j]) j=ne[j-1];
		if (s[i]==p[j])
		{
			j++;
			if (j==n)
			{
				//cout << i - n + 1 << " ";
				ans++;
				j=ne[n-1];
			}
		}
	}
	cout<<ans;
	return 0;
}



