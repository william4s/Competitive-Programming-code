#include<bits/stdc++.h>
using namespace std;
void dg(long x,long n)
{
	if (x==0)
		return ;
	dg(x/n,n);
	cout<<x%n;
	
}

int main(){
	long x,y,n,i,j;
	cin>>n;
	for (i=1;i<=n;i++)
		{
			cin>>x;
			dg(x,2);
			cout<<"\n";
		}

	return 0;
}

