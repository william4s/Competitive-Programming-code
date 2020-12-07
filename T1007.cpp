#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
int main()
{
	int T;
	cin>>T;
	int qw=1;
	while(qw<=T)
	{
		ll maxn=0;
		string s;
		int a[200];
		memset(a,0,sizeof(a)); 
		cin>>s;
		for (int i=0; i<=s.size(); i++)
		{
			a[s[i]]++;
		}
		for (int i='a';i<='z';i++)
		{
		
			if (a[i]>maxn)
				maxn=a[i];
		}
		
		cout<<"Case #"<<qw<<": "<<maxn<<"\n";
		qw++;
	}

	return 0;
}


