#include<bits/stdc++.h>
using namespace std;
long maxn(int a,int b,int c)
{
	if (a>=b&&a>=c)
		return a;
	if (b>=a&&b>=c)
		return b;
	if (c>=a&&c>=b)
		return c;
	
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    long t,n,a[100];
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	long len=0;
    	long count=1;
    	for (int i=0;i<n;i++)
    		{
    			cin>>a[i];
    			if (a[i]==0)
    				{
						cout<<char(count+'a');
    					cout<<"\n";
    					count++;
    				}
    			if (a[n-1]==0)
    				{
    					cout<<char(count+'a');
    					cout<<"\n";
    					count++;
					}
			}
    	for (int i=0;i<n;i++)
    	{
    		
			if (a[i]!=0&&i!=n-1&& a[i]<a[i+1])
			{
			
    			for (int j=0;j<a[i];j++)
    			{
    				cout<<'a';
				}
				
				cout<<"\n";
			}
			else if(a[i]!=0&&i!=n-1&& a[i]>a[i+1])
			{
					for (int j=0;j<a[i];j++)
    			{
    				cout<<'a';
				}
				
				cout<<"\n";
				for (int j=0;j<a[i];j++)
    			{
    				cout<<'a';
				}
				
				cout<<"\n";
				i++;
			} 
			else if (a[i]!=0&&i==n-1) //最后一个 
			{
				for (int j=0;j<max(a[i],a[i-1]);j++)
    			{
    				cout<<'a';
				}
				
				cout<<"\n";
			}
			
			
		}
		for (int j=0;j<a[n-1];j++)
				{
					cout<<'a';
				
					}	
			cout<<"\n"; 
    	
    	
	}
	
	
	return 0;
} 
