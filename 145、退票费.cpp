#include<bits/stdc++.h>
using namespace std;

int main(){
	double x,t;
	cin>>x;
	t=x*0.05;
	if (t<5)
		printf("%.2lf",x-5.00);
	else
		printf("%.2lf",x-t);
	
	return 0;
}
