#include<bits/stdc++.h>
using namespace std;
long k,t,n,m,a[1010]={0},ans;	
int main(){
 	ios::sync_with_stdio(false);
    cin.tie(0);
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));	
		int flag=0;
		cin>>n>>m;
		for (int i=1;i<=n;i++)	
		{
			cin>>k;
			a[k]=1;
		}
		for (int i=1;i<=m;i++)	
		{
			
			cin>>k; 
			if (a[k])	
			{
				ans=k;
				flag=1;
			}
		}	

		if (flag){
			cout<<"YES"<<endl<<1<<' '<<ans<<"\n";
			
		}
		else
			cout<<"NO\n"; 
		
	}
	
	
	
	return 0;
} 
