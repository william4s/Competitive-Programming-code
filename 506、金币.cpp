#include<bits/stdc++.h>
using namespace std;

int main(){
	long k,i=1,ans=0,sum=0;
	cin>>k;
	while(sum<k)
	{
		if ((sum+i)>k)
			{
				ans+=(k-sum)*i;
				sum=k;
			}
		else
			{
				ans+=i*i;
				sum+=i;
			}
		i++;
	} 
	cout<<ans;
	return 0;
}
