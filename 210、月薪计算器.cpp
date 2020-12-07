#include<bits/stdc++.h>
using namespace std;

int main(){
	double t,sum=0;
	for (int i=0;i<12;i++)
		{
			cin>>t;
			sum+=t;
		}
	printf("%.2lf",sum/12);
	
	return 0;
}
