#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ws=1,ans[15]={0};
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int t=i;
		while(t)
		{
			ans[t%10]+=1;
			t/=10;
		}
		
	}
	for (int i=0;i<10;i++)
		cout<<ans[i]<<endl;
	
	return 0;
}
