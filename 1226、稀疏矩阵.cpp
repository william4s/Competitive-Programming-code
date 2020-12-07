#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x,i,j;
	cin>>n>>m;
	for (i=1;i<=n;i++)	
	{
	
		for (j=1;j<=m;j++)
		{
			cin>>x;
			if (x!=0)
				cout<<i<<" "<<j<<" "<<x<<endl;
		 } 

	}
	return 0;
}

