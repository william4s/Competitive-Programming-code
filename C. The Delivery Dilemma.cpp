#include<bits/stdc++.h>
using namespace std;

pair<int, int> c[200010];

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t --)
	{
		int n, sum = 0;
		cin >> n;
		for(int i = 1; i <= n; i ++) cin >> c[i].first;
		for(int i = 1; i <= n; i ++) cin >> c[i].second;
		sort(c + 1, c + n + 1);
		while(sum <= c[n].first && n >= 1)
		{
			sum += c[n].second;
			n --;
			cout<<sum<<' '<<c[n].first<<endl;
		}
		cout << min(sum, c[n + 1].first) << endl;
	}
	return 0;
}

