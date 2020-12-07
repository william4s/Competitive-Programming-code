#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	if (n==0)
	{
		cout<<0;
		return 0;
	}
	else if (n==1)
	{
		cout<<1;
		return 0;
	}
	else if (n==2)
	{
		cout<<1;
		return 0;
	}
	ll i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
		if (sum>n+1)
		{
			i--;
			break;
		}
	}
	cout<<n-i+1;	
	return 0;
}



