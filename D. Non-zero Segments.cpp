#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

#define ll long long

const int N = 200000;
const int HashMOD = 1000007;

int a[N + 50], num, n, cnt, ans, lst[N + 50];

ll sum[N + 50], b[N + 50];


int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]), sum[i] = sum[i - 1] + a[i], b[++cnt] = sum[i];
	b[++cnt] = 0;
	sort(b + 1, b + cnt + 1);
	cnt =unique(b + 1, b + cnt + 1) - b - 1;

	int last = -2;
	for (int i = 1; i <= cnt; i++) lst[i] = -1;
	lst[lower_bound(b + 1, b + cnt + 1, 0) - b] = 0;
	for (int i = 1; i <= n; i++)
	{
		sum[i] = lower_bound(b + 1, b + cnt + 1, sum[i]) - b;
		//	cout << sum[i] << " " << lst[sum[i]] << " " << last << endl;
		if (lst[sum[i]] + 1 > last && lst[sum[i]] != -1) lst[sum[i]] = i, last = i - 1, ans++;
		else lst[sum[i]] = i;
	}
	printf("%d", ans);
	return 0;
}
