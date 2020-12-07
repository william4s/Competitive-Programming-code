#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;  //scanf("%d%d",&n,&k);
	for (int i=1;i<=k;i++)
	{
		int t=n%10;
		if (t==0)
			n=n/10;
		else
			n=n-1;
	}
	cout<<n;  //printf("%d",n);
	
	return 0;
}
