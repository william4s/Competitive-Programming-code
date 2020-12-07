#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int NN=1e6+10;
ll a[NN];
int main(){
	ios::sync_with_stdio(false);
	ll Q;
	cin>>Q;
	while(Q--)
	{
		ll n,k;
		cin>>n>>k;
		ll Allthea=n*k;
		for (ll i=1;i<=Allthea;i++)	cin>>a[i];
		sort(a+1,a+1+Allthea);
		
		ll ste=n/2+1,COUNT=0,sum=0;
		for (ll i=Allthea-ste+1;COUNT++<k;i-=ste)	sum+=a[i];
		
		cout<<sum<<"\n";
	}
	return 0;
}



