#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],ans;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=m;j++)
			cin>>a[i][j];
	int x,y,x1,y1;
	cin>>x>>y>>x1>>y1;
	for (int i=x;i<=x1;i++)
		for (int j=y;j<=y1;j++)
		ans+=a[i][j];
	cout<<ans;
	return 0;
}
