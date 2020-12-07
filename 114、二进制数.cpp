#include<bits/stdc++.h>
using namespace std;
string fx(long x)
{
	string s="";
	while(x)
	{
		s=char(x%2+'0')+s;
		x/=2;
	}
	return s;
}
int main(){
	long n;
	cin>>n;
	cout<<fx(n);
	return 0;
}

