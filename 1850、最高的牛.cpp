#include<bits/stdc++.h>
using namespace std;
int d[10010]={0}, pd[10010][10010]={0};
int main(){
	int n,p,h,m;
	cin>>n>>p>>h>>m;
	d[1]=h;
	for (int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
		if (a>b)	swap(a,b);
		if (!pd[a][b])
		{
			pd[a][b]=1;
			d[a+1]--;
			d[b]++;
		}
		
	}
	for (int i=1;i<=n;i++)
	{
		d[i]+=d[i-1];
		cout<<d[i]<<endl;
	}
	
	return 0;
}
