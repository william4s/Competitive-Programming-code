#include<bits/stdc++.h>
using namespace std;

int main(){
	long fb[45];
	int t,n,i;
	fb[1]=fb[2]=1;
	for (i=3;i<=40;i++)
		fb[i]=fb[i-1]+fb[i-2];
	cin>>t;
	for (i=0;i<t;i++)
	{
		scanf("%d",&n);
		cout<<fb[n]<<endl;
	}
	
	
	return 0;
}
