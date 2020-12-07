#include<bits/stdc++.h>
using namespace std;
bool pd(long k,long x)
{
	if (k==x)
		return 1;
	if (k>x)
		return 0;
	return (pd(2*k+1,x)||pd(3*k+1,x));
	
	
	
}
int main(){
	char ch;
	int k,x;
	cin>>k>>ch>>x;
	if (pd(k,x))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

