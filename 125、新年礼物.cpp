#include<bits/stdc++.h>
using namespace std;
int w,n,a[1010],ans=0;
int vis[1010];
int main(){
	
	cin>>w>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int l=-1,r=n-1;
	while (l<r)
	{
		l++;
		if (vis[l]==1)
		{
			continue;
		}
		vis[l] = 1;
		for (int i=r; i>l; i--)
		{
			if (a[l]+a[i]<=w)
			{
				if (vis[i]==0)
				{
					vis[i] = 1;
					break;
				}
			}
		}
		ans++;
	}
	cout<<ans<<endl;
	
	return 0;
}
