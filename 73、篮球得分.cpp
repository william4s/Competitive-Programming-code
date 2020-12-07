#include<bits/stdc++.h>
using namespace std;

int main(){
	int sum,a,b,c,cz;
	cin>>sum>>cz;
	sum==a*3+b*2;
	cz==a-b;
	for (int i=0;i*3<=sum;i++)
		if (sum==3*i+2*(i-cz))
			cout<<i<<' '<<i-cz;
	
	
	return 0;
}
