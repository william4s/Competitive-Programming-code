#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll d;
	cin>>d;
	d=d+2;
	if (d>7)
	{
		cout<<(d%7)<<'\n';
	}
	else
		cout<<d<<"\n";
	return 0;
}



