#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll T,A,B,C,ans;
	cin>>T;
	while(T--)
	{

		cin>>A>>B;
		C=A&B;
		if (A==B||((A^C)&(B^C))==0&&C==0)
			cout<<1<<"\n";
		else
			cout<<C<<"\n";
	}
	return 0;
}

