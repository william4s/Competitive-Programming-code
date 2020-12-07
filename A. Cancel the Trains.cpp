#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int a[150],b[150];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll m,n;
		//asdasdasdsa
		cin>>n>>m;
		memset(a,0,sizeof a);  //#$^%#$GSDG
		for (int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			
			
			a[x]++;
		}
		ll ans=0;
		
		for (int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			if (a[x])
				ans++;
		}
		//asfdasf
		//assaffa
		cout<<ans<<"\n";
		//asdasfasfgasg
	}
	return 0;
}



