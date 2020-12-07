#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;

typedef long long ll;
int a[55][55];
int main()
{

	int T;
	//cin>>T;
	scanf("%d",&T);
	while(T--)
	{
		ll n,t,sum=0,x;
		//	cin>>n;
		scanf("%lld",&n);

		for (ll i=1; i<=n; i++)
			for (ll j=1; j<=n; j++)
				scanf("%d",&a[i][j]);
		//cin>>a[i][j];

		for (ll i=1; i<=3; i++)
			for (ll j=1; j<=3; j++)
			{
				//cin>>x;
				scanf("%lld",&x);
				if (i==1&&j==1)
					t=x;
				sum+=x;
			}
		if (t==sum)
		{
			for (ll i=1; i<=n; i++)
			{

				for (ll j=1; j<=n; j++)
				if (j==n)
					printf("%d",a[i][j]);
				else
					printf("%d ",a[i][j]);
			
				printf("\n");
			}
		}
		else
		{
			for (ll i=1; i<=n; i++)
			{

				for (ll j=1; j<=n; j++)
					if (j==n)
						printf("%d",0);
					else
						printf("%d ",0);
				//cout<<0<<' ';
			
					printf("\n");
				//cout<<"\n";
			}
		}
	}


	return 0;
}


