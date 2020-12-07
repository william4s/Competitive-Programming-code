#include<bits/stdc++.h>
using namespace std;

long dg(long n,long m)
{
	if (n<1||m<1||m>n)
		return 0;
	if (n==1&&m==1||(m==1||m==n))
		return 1;
	return dg(n-1,m-1)+dg(n-1,m);
	
}
int main(){
	long n,m,i,j;
	cin>>n>>m;
	cout<<dg(n,m);
	return 0;
}

