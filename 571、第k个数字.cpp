#include<bits/stdc++.h>
using namespace std;
long k;
long dg(long n,long t)
{
	if (k==t)
		return n%10;
	dg(n/10,t+1);
}
int main(){
	long n;
	cin>>n>>k;
	cout<<dg(n,1);
	
	return 0;
}

