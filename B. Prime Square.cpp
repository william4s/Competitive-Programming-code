#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
bool fun(ll x)
{
	if (x<2)
		return 0;
	for (ll i=2;i<=x/i;i++)
		if (x%i==0)
			return 0;
	return 1;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		if (fun(n))
		{
			for (ll i=1;i<=n;i++)
			{
				for (ll j=1;j<=n;j++)
				{
					cout<<"1 ";
				}
				cout<<'\n';
			}
		}
		else
		{
			bool pd=0;
			ll i=1,j=1;
			while(1) 
			{
				//if (fun(n-1+i)&&fun(i*(n-1)+j)&&fun(i)==0&&fun(j)==0)
				if (fun(n-1+i)&&fun(i)==0)
				{
					while(fun(i*(n-1)+j)==0||fun(j)==1)
						j++; 
					for (ll q=1;q<=n;q++)
					{
						for (ll w=1;w<=n;w++)
						{
							if (q<n&&w<n)
								cout<<"1 ";
							else if (q==n&&w==n)
								cout<<j;
							else
								cout<<i<<' ';
						}
						cout<<'\n';
					}
					//cout<<i<<' '<<j;2
					break;
				}
				
				i++;
				
				
			}
		}
		
	}
	return 0;
}



