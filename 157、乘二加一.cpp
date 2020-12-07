#include<bits/stdc++.h>
using namespace std;
long x;
void dg(long n)
{
	if (n==1)
	{
		cout<<"1";
		return ;
	}
//	else
//	if (n==1&&x%2!=0)
//	{
//		cout<<"1";
//		return ;
//	}
	if (n%2==0)
	{
		cout<<"(";
		dg(n/2);
		cout<<")*2";
	}
	if (n%2==1)
	{
	
		dg(n-1); 
		cout<<"+1";
	}
}

int main(){	
	long n;
	cin>>n;
	x=n;
	dg(n); 
	return 0;
}

