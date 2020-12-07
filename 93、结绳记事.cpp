#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n,t;
	cin>>m>>n;
	t=n;
	for (int i=0;i<t;i++)
	{
		if (m%2==0) 
		{
			cout<<0;
			m/=2;
		}
		else{
			cout<<1;
			m=floor(m/2.0)+1;
		}
	}
	
	return 0;
}

