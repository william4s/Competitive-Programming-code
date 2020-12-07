#include<bits/stdc++.h>
using namespace std;
int pd(long t)
{
	for (int i=2;i*i<=t;i++)
	if (t%i==0) return 0;
return 1;
}

int main(){
	long n;
	cin>>n;
	for (long i=2;i<=n/2;i++)
	{
		if (n%i==0)
		{
			if (pd(n/i))
			{
				cout<<n/i;
				return 0;
			}
		}
	}
	
	
	return 0;
}
