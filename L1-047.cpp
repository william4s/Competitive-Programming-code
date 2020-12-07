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
	while(n--)
	{
		ll a,b;
		string s;
		cin>>s>>a>>b;
		if ((a<15||a>20)||(b<50||b>70))
			cout<<s<<endl;
		
	}
	return 0;
}



