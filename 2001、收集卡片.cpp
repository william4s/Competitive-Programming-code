#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,t,l=0,r=0,k,ans=LONG_LONG_MAX;
#define Max 500001
string s;
int F[Max],a[Max];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>s;
	for(ll i=0; i<n; i++)
	{
		if (F[s[i]]==0)
		{
			F[s[i]]++;
			t++;
		}
	}
	while(r<n)
	{
		while(r<n&&k<t)
		{
			if (a[s[r]]==0)
			{
				a[s[r++]]=1;
				k++;
			//	cout<<"r:"<<r<<endl;
			}
			else
			{
				r++;
			}
		}
		if(k<t) break;
		ans=min(ans,r-l);
		if(--a[s[l++]]==0)  k--; 

	}
	cout<<ans;
	return 0;
}

