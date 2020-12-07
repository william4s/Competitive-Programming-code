#include<bits/stdc++.h>
using namespace std;
bool a[50000],tot,ans=INT_MIN,re;
void fx(long i,long k)
{
	for(long j=i;j<=k+i;j++)
	{
		a[j]=!a[j];
	}
	return ;
}
bool check(long n,long k)
{
	for(long i=n;i>=n-k+1;i--)
	{
		if(a[i])
			return 0;
	}
	return 1;
}
int main(){
	string s;
	long n,i,j,k;
	cin>>s;
	for (i=0;i<s.size();i++)
	{
		a[i+1]=s[i]-'0';
	}
//	for(i=1;i<=s.size();i++)
//		cout<<a[i];
	for(k=1;k<=n;k++)
	{
		tot=0;
		for(i=1;i<=n-k+1;i++)
		{
			if(a[i])
			{
				fx(i,k);
				tot++;
			}	
		}
		if(check(n,k))
			{
				if(ans>tot&&tot!=0)
					{
						ans=tot;
						re=k;
					}
			}
	}
	 cout<<re; 
	return 0;
}

