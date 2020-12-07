#include<bits/stdc++.h>
using namespace std;
long ack(long m,long n)
{
	if (m==0)
		return 1+n;
	if (n==0)
		return ack(m-1,1);
	
	return ack(m-1,ack(m,n-1));
	
}
int main(){
	long m,n;
	cin>>m>>n;
	cout<<ack(m,n);
	return 0;
}

