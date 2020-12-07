#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 200010;
ll k, m, n, p, a[N];//m layers, n ary tree
ll ans;

long long cal(ll n, ll m, ll layer) {
	long long res = (1 - pow(n, m - layer)) / (1 - n);
	return res;
}

int main() {
	while(scanf("%lld %lld %lld %lld", &k, &m, &n, &p) != EOF) {
		ans = 0;
		for(int i = 1; i <= k; i ++) scanf("%lld", &a[i]);
		ll cnt = n, start = 1; 
		sort(a + 1, a + k + 1);
		for(ll layer = 1; layer <= m - 1; layer ++) {//m layers的边的权重值 
			for(ll i = start; i < start + cnt; i ++) {
				ans = (ans + (cal(n, m, layer) % p) * a[i] % p) % p;
			}
			start += cnt;
			cnt *= n;
			ans = ans % p;
		}
		printf("%lld\n" , ans);
	}
	
	return 0;
} 
