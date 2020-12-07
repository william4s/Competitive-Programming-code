#include<bits/stdc++.h>
using namespace std;
unsigned long long a[100];
int main(){
	int n;
	a[1]=1;
	a[2]=2;
	for(int i=3;i<=30;i++)
		a[i]=a[i-1]+a[i-2]; 
	
	while(cin>>n)
	{
		cout<<a[n]<<"\n";
	}
	
	return 0;
}

