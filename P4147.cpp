#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int h[N][N],n,m;
int ans = 0;

int l[N],r[N];
int solve(int a[N])
{

	{
		stack<int>st;
		for(int i = 1; i<=m; i++)
		{
			while(st.size() and a[st.top()] >= a[i])
			{
				st.pop();
			}
			if(st.empty()) l[i] = 1;
			else l[i] = st.top()+1;
			st.push(i);
		}
	}
	{
		stack<int>st;
		for(int i = m; i>=1; i--)
		{
			while(st.size() and a[st.top()] >= a[i])
			{
				st.pop();
			}
			if(st.empty()) r[i] = m;
			else r[i] = st.top()-1;
			st.push(i);
		}
	}
	for(int i = 1; i<=m; i++)
	{
		ans = max(ans,a[i] * (r[i]-l[i]+1));
	}
}


int main()
{
	cin>>n>>m;
	for(int i = 1; i<=n; i++)
	{
		for(int j = 1; j<=m; j++)
		{
			string s;
			cin>>s;
			h[i][j] = (s=="F");
			if(h[i][j] == 1) h[i][j] += h[i-1][j];
		}
	}

	for(int i = 1; i<=n; i++)
	{
		solve(h[i]);
	}
	cout<<ans*3<<endl;





	return 0;
}
