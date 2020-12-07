#include<bits/stdc++.h>
using namespace std;

int main(){
	long i,t,l,r,m;
	cin>>t;
	for (int q=0;q<t;q++)
	{   //l<=a,b,c<=r
		//n*a+b-c=m 
		scanf("%ld%ld%ld",&l,&r,&m);
		int zt=0;
		for (i=1;i<=floor((m+r-l)/l);i++) //n 
		{
			for (int j=l;j<=r;j++)	//a
			{
				for (int k=l;k<=r;k++)	//b
				{
					if (l<=(i*j+k-m)&&(i*j+k-m)<=r)
					{	
						cout<<j<<' '<<k<<' '<<i*j+k-m<<endl;
						zt=1;
						break;
					}
				 } 
				 if (zt) break;
			}
			 if (zt) break;
		}
	}
	
	return 0;
}
