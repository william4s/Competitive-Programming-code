#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,a[30]={0},t;
	cin>>n;
	for (i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[t/10]+=1;
		
	}
	a[1]+=a[0];
	for (i=10;i>=1;i--)
		cout<<a[i]<<endl;
	return 0;
}
