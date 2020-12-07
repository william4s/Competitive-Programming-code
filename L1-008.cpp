#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;


int main(){
/*	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
*/
	ll a,b,cnt=0;
	ll sum=0;
	cin>>a>>b;
	for (ll i=a;i<=b;i++)
	{
		
		printf("%5lld",i);
		sum+=i;
		cnt++;
		if (cnt%5==0)
		{
			cout<<'\n';
			cnt=0;
		}
	}
	if (cnt==0)
		cout<<"Sum = "<<sum;
	else
		cout<<"\nSum = "<<sum;	
	return 0;
}


