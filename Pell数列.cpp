#include<bits/stdc++.h>
using namespace std;
long a[1000000];
const 
long pell(long x)
{
	if (a[x]!=0)
		return a[x];
	if (x==1||x==2)
		return x;
	a[x]=(2*(pell(x-1)%32767)+(pell(x-2))%32767)%32767;
	return a[x];
} 
int main(){
	ll ax;
    a[1]=1;
    a[2]=2;
	long n,i,j,x;
	scanf("%ld",&n);
	for (i=0;i<n;i++)
	{
		cin>>x;
		printf("%ld\n",pell(x));
	}
	return 0;
}

