#include<bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
typedef long long ll;
vector<vector<int> > v;

int main(){
	
	int n ,m;
	cin>>n>>m;
	for (int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x-1].push_back(y);
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<v[i].size();j++)
			cout<<v[i][j]<<' ';
		cout<<endl;
	}
	
	return 0;
}



