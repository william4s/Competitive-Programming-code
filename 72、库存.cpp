#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans=0,a,b,c,d;
	cin>>a>>b>>c>>d;
	while(a!=b)
	{
		a-=c;
		b+=d;
		ans++;
	}
	cout<<ans;
	return 0;
}
