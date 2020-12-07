#include<bits/stdc++.h> 
using namespace std;
int main(){
	double n,i,j,k,l;
	double m;
	scanf("%lf%lf",&n,&m);
	for (i=1;2*i<=m;i+=1)
	 for (j=2;j/2*3<=m;j+=2)
	 {
	 	if (2*i+j/2*3+(n-i-j)/5*7==m&&(n-i-j)>=1.0) 
	 	 printf("%.0lf %.0lf %.0lf\n",2*i,j/2*3,(n-i-j)/5*7);
	 }
	
	return 0;
}
