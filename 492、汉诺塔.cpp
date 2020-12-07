#include<bits/stdc++.h>
using namespace std;
int step=1;
void hano(int n,char a,char b,char c)
{
	if (n==1)
	{
		cout<<"第"<<step<<"步，将"<<n<<"从"<<a<<"杆移动到"<<b<<"杆"<<endl;
		step++;
	}
	else
	{
		hano(n-1,a,c,b);	
		cout<<"第"<<step<<"步，将"<<n<<"从"<<a<<"杆移动到"<<b<<"杆"<<endl;
		step++;
		hano(n-1,c,b,a );

	}
}
int main()
{
	int n;
	cin>>n;
	hano(n,'X','Y','Z');

	return 0;
}

