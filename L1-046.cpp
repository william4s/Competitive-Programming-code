#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll x,t=1,cnt=1;
	cin>>x;
	bool pd=0;
	while(1)
	{
		if (t/x!=0) //div can be zero!
			pd=1;
		if (t%x==0)
		{
			cout<<t/x<<' '<<cnt<<endl;
			break;
		}
		if (pd)
		{
			cout<<t/x;
			t%=x; 
		}
		t=t*10+1;
		cnt++;
	}
	return 0;
}



