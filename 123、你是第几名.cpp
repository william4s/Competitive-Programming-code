#include<bits/stdc++.h>
using namespace std;
int a[1010];
bool cmp(int x,int y)
{
	return x>y;
}
int main(){
	long n,x;
	cin>>n>>x;
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			cout<<i+1;
			break;
		}
	}
	
	return 0;
}

