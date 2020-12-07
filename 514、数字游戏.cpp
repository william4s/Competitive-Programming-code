#include<bits/stdc++.h>
using namespace std;

int main(){
	long m,n,t=1,s=1;
	cin>>m>>n;
	for (int i=2;i<=n;i++)
		{
			t*=3;
			s+=t;
		}
	cout<<(s+1)*(2*m+1);
	return 0;
}
