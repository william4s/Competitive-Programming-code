#include<bits/stdc++.h>
using namespace std;

int main(){
	long t,n,m,a,x,y;
	cin>>n>>m>>x>>y; 
	a=__gcd(n,m);
	t=n/m;
	if (t&&(n-m*t)/a!=0)
		cout<<t<<"+"<<(n-m*t)/a<<"/"<<m/a;
	else
	if (t&&(n-m*t)/a==0)
		cout<<t;
	else
		cout<<(n-m*t)/a<<"/"<<m/a;
	return 0;
}

