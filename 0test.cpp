#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], rev[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i]--;
		if (a[i] == i)
		{
			cout << -1 << endl;
			return 0;
		}
		rev[a[i]] = i;
	}
	vector<bool> used(n, 0);
	vector<int> ans;
	for (int i = n - 1; i >= 0; i--)
	{
		while (rev[i] < i)
		{
			if (used[rev[i]])
			{
				cout << -1 << endl;
				return 0;
			}
			used[rev[i]] = true;
			ans.push_back(rev[i]);
			swap(a[rev[i]], a[rev[i] + 1]);
			rev[a[rev[i]]] = rev[i];
			rev[a[rev[i] + 1]] = rev[i] + 1;
		}
	}
	if ((int)ans.size() != n - 1)
	{
		cout << -1 << endl;
	}
	else
	{
		for (int i : ans)
			cout << i + 1 << endl;
	}
	return 0;
}
