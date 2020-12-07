#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e6+5;

ll n,k;
ll q[N],p[N],a[N];


int main(){
	ios::sync_with_stdio(false);
	cin>>n>>k;
	for (ll i=0;i<n;i++)
		cin>>a[i];
	ll hh=0,tt=-1;
	for (ll i=0;i<n;i++)
	{
		while(hh<=tt&&a[i]<q[tt]) --tt;
		q[++tt]=a[i];
		p[tt]=i;
		if (i-p[hh]>k-1) ++hh;
		if (i>=k-1) cout<<q[hh]<<' ';
		
	}
	hh=0,tt=-1;
	cout<<endl;
	for (ll i=0;i<n;i++)
	{
		while(hh<=tt&&a[i]>q[tt]) --tt;
		q[++tt]=a[i];
		p[tt]=i;
		if (i-p[hh]>k-1) ++hh;
		if (i>=k-1) cout<<q[hh]<<' ';
	}
	
	
	return 0;
}
