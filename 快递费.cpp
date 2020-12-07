#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans=0;
	char ch;
	cin>>n>>ch;//读入重量 和是否加急
	if (n<=1000)
		ans=8;
	else
	{
		if ((n-1000)%500==0) //如果超出部分能被500整除
			ans=8+(n-1000)/500*4;
		else
			ans=8+(n-1000)/500*4+4;//不是500倍数，那就有多的部分，最后要加个4
	}
	if (ch=='y') //判断是否加急 
		ans=ans+5;
	
	cout<<ans; 

	return 0;
}

