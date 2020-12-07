#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll n,a=0,b=0,t;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if (t%2==1)
			a++;
		else
			b++;
	}
	cout<<a<<' '<<b<<'\n';
	return 0;
}



