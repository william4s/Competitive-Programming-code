#include<bits/stdc++.h>
using namespace std;
bool pd(int x)
{
	for (int i=2;i<=sqrt(x);i++)
		if (x%i==0)
			return 0;
	return 1;
}
int main(){
	int n;
	cin>>n;
	int t=n;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (t%i==0)
		{
			if (pd(i))
			{
				while(t%i==0&&t!=1)
				{
					t/=i;
					if (t!=1)
						cout<<i<<"*";
					else
						cout<<i;
				}
			}
		}
	}
	
	return 0;
} 
