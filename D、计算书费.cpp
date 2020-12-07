#include<bits/stdc++.h>
using namespace std;

int main(){
	double a[15];
	for (int i=0;i<10;i++)
		cin>>a[i];
	double b[10]={28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
	double ans=0.0;
	for (int i=0;i<10;i++)
		ans+=1.0*a[i]*b[i];
	printf("%.1f",ans);
	
	return 0;
}
