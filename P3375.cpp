#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
const int N=1e6+10;
int ne[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string p,s;
	cin>>p;
	int n=p.size();
	for (int i=1,j=0; i<n; i++)
	{
		while(j&&p[i]!=p[j]) j=ne[j-1];
		if (p[i]==p[j]) j++;
		ne[i]=j;

	}
	for (int i=0,j=0; i<m; i++)
	{
		while(j&&s[i]!=p[j]) j=ne[j-1];
		if (s[i]==p[j])
		{
			j++;
			if (j==n)
			{
				cout<<i-n+2<<endl;
				j=ne[j-1];
			}
		}
		
		
	}
	for(int i=0;i<n;i++)
		cout<<i<<' '<<ne[i]<<'\n';
	
	return 0;
}



