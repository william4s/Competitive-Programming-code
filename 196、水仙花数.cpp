#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,a,b,c;
	for (i=100;i<=999;i++)
	{
		a=i/100;
		b=(i-a*100)/10;
		c=i%10;
		int e,f,g;
		e=f=g=1;
		for (int j=0;j<3;j++)
		{
			e*=a;
			f*=b;
			g*=c;
		}
		if (i==e+f+g)
			cout<<i<<endl;
	}
	
	return 0;
}
