#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=3e5+5;

ll a[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ll T,k,n;
	cin>>T;
	while(T--)
	{
		int ans = -1, k;
		cin >>n;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		for(int i = 1; i <= n; i++)
		{
			if(a[i] >= ans && (a[i] > a[i - 1]&&a[i-1]!=0 || a[i] > a[i + 1]&&a[i+1]!=0))
			{
				ans = a[i];
				k = i;
			}
		}
		if(ans == -1) cout << "-1" << endl;
		else cout << k << endl;
	}

	return 0;
}


