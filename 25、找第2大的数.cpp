#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	int t,n,max,m_l;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	sort(a,a+n);
	max=a[n-1];
	for (int j=n-1;j>=0;j--)
	{
		if (max!=a[j])
			{
				cout<<a[j];
				return 0;
			}
	 } 
	
	return 0;
}
