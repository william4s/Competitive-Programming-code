#include<bits/stdc++.h>
using namespace std;
long gcd(long n,long m)
{
	if (n%m==0)
		return m;
	return gcd(m,n%m);
	
}

int main(){
	long t,n,m;
	cin>>n>>m;
	t=__gcd(n,m);
//	cout<<t<<endl;
	cout<<n/t<<'/'<<m/t;
	return 0;
}

