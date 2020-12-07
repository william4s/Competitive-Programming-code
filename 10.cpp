#include <bits/stdc++.h>
using namespace std;
struct node
{
  string name, id;
  int flag, h, m, t, hao;
} a[100001], ans[100001];
vector<node> zz;
int d, p, t, s, cnt, pos;
map<string, int> vis, viszz;
bool cmp(node x, node y)
{
  if (x.t != y.t)
    return x.t < y.t;
  return x.hao < y.hao;
}
bool check(string s)
{
  if (s.length() != 18)
    return false;
  for (int i = 0; i < s.length(); i++)
    if (!isdigit(s[i]))
      return false;
  return true;
}
int main()
{
  cin >> d >> p;
  for (int i = 1; i <= d; i++)
  {
    cin >> t >> s;
    for (int j = 1; j <= t; j++)
    {
      cin >> a[j].name >> a[j].id >> a[j].flag >> a[j].h;
      scanf(":%d", &a[j].m);
      a[j].t = a[j].h * 60 + a[j].m;
      a[j].hao = j;
      if (a[j].flag == 1 && check(a[j].id) && viszz.find(a[j].id) == viszz.end())
      {
        viszz[a[j].id] = 0;
        zz.push_back(a[j]);
      }
    }
    sort(a + 1, a + t + 1, cmp);
    cnt = 0;
    for (int j = 1; j <= t && cnt < s; j++)
    {
      if (check(a[j].id) && (!vis[a[j].id] || (i - vis[a[j].id]) > p))
      {
        cout << a[j].name << " " << a[j].id << endl;
        cnt++;
        vis[a[j].id] = i;
      }
    }
  }
  for (int i = 0; i < zz.size(); i++)
    cout << zz[i].name << " " << zz[i].id << endl;
  return 0;
}
