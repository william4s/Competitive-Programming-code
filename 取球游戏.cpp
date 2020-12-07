#include<bits/stdc++.h>
using namespace std;
long jc(int n)
{
	long i,ans=1;
	for (i=2;i<=n;i++)
		ans*=i;
	return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<jc(n)/(jc(m)*jc(n-m));
	
	
	
	return 0;
}
