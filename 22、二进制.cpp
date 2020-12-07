#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,i=0;
	int a[20020];
	cin>>n;
	while (n!=0)
	{
		a[i++]=n%2;
		n/=2;
	}
	for (int j=i-1;j>=0;j--)
		cout<<a[j];
	
	
	return 0;
} 
