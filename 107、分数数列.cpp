#include<bits/stdc++.h>
using namespace std;

int main(){
	long n,i,j,fz,fm;
	cin>>n;
	fz=1;
	fm=3;
	n--;
	while(n--)
	{
		if ((fz+1)==fm)
		{
			fz=1;
			fm+=2;
		}
		else
			fz++;
	}
	cout<<fz<<'/'<<fm;
	return 0;
}

