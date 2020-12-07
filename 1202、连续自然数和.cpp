#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll M,sum=0,i=1;
	cin>>M;
	for (ll j=1;j<M;j++)
	{
		sum+=j;
		while(sum>M)
		{
			sum-=i;
			i++;
		}
		if (sum==M)
			cout<<i<<' '<<j<<'\n';
		
		
	}
	return 0;
}


