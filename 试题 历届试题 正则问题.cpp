#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int sol()
{
	char x;
	ll i=0,j=0;
	while(1)
	{

		x=getchar();
		if (x=='x')
		{
			i++;
		}
		else if (x=='|')
		{
			j=max(i,j);
			i=0;
		}
		else if (x=='(')
		{
			i+=sol();
		}
		else
		{
			j=max(i,j);
			return j;
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll ans=sol();
	cout<<ans;

	return 0;
}


