#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1100]; 
ll fx(ll x)
{
	ll t=0,w=x;
	while(x)
	{
		t+=x%10;
		x/=10;
	}
	return t+w;
}
int main(){
	ll n,i,j,t=0;
	cin>>n;
	for(i=max((ll) 0,n-100);i<=n;i++)
	{
		if(fx(i)==n)
			a[t++]=i;
	}
	cout<<t<<endl;
	for(i=0;i<t;i++)
		cout<<a[i]<<' ';
	return 0;
}

