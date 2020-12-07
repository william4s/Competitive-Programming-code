#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	ll t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		ll i=1,temp,cnt=0;
		while(1)
		{
			temp=i*(i+1)/2;
			if (x<temp)
				break;
			x-=temp;
			i=i*2+1;
			cnt++;
		}
		cout<<cnt<<"\n";
	}
	
	
	return 0;
}

