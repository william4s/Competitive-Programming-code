#include<bits/stdc++.h>
using namespace std;

int main(){
	double x;
	cin>>x;
	if (x<=10.0)
		cout<<"2.5";
	else
		printf("%.1lf",((ceil(x-10.0))*1.5+2.5));
	
	return 0;
}
