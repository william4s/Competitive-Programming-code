#include<iostream>
#include<algorithm>
#include<cstdio>
#include<map>
using namespace std;
const int maxn = 1e5+10;

struct node
{
	int key, pre, next;
} nn[maxn],mm[maxn];
struct kk
{
	int val, next;
} mk[maxn];
map<int, int>ss;
int st, n, x, v, y;
int k1, k2;


int main()
{
	cin >> st >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> x >> v >> y;
		mk[x].val = v;
		mk[x].next=y;
		ss[abs(v)] = 0;
	}
	int p = st;
	while (p != -1)
	{
		if (ss[abs(mk[p].val)] == 0)
		{
			ss[abs(mk[p].val)]++;
			nn[k1].key = mk[p].val;
			nn[k1].pre = p;
			nn[k1++].next = mk[p].next;
		}
		else
		{
			mm[k2].key = mk[p].val;
			mm[k2].pre = p;
			mm[k2++].next = mk[p].next;
		}
		p = mk[p].next;
	}
	for (int i = 0; i < k1-1; ++i)
		printf("%05d %d %05d\n", nn[i].pre, nn[i].key, nn[i+1].pre);
	printf("%05d %d -1\n", nn[k1 - 1].pre, nn[k1 - 1].key);
	if (k2)
		for (int i = 0; i < k2 - 1; ++i)
			printf("%05d %d %05d\n", mm[i].pre, mm[i].key, mm[i + 1].pre);
	printf("%05d %d -1\n", mm[k2 - 1].pre, mm[k2 - 1].key);
}
