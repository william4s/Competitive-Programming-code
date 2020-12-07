#include <bits/stdc++.h>
using namespace std;
int n, post[101], tree[101], idx;
void build(int pos)
{
  if (pos > n)
    return;
  tree[pos] = post[idx--];
  build((pos << 1) + 1);
  build(pos << 1);
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("data/data1.in", "r", stdin);
  // freopen("data/data1.out", "w", stdout);
  #endif
  cin >> n;
  idx = n;
  for (int i = 1; i <= n; i++)
    cin >> post[i];
  build(1);
  for (int i = 1; i <= n; i++)
    cout << tree[i] << " \n"[i == n];
  return 0;
}
