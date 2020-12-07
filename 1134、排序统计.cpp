#include<bits/stdc++.h>
using namespace std;
int a[210];
int *p=&a[100];
int main(){
	int n,x;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>x;
		p[x]++;
	}
	for (int i=-100;i<=100;i++)
		if (p[i])
			cout<<i<<' '<<p[i]<<endl;
	return 0;
}

