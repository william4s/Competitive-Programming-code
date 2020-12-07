#include<bits/stdc++.h>
using namespace std;
double f(double x1,double y1,double x2,double y2){
	return(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
}
int main(){
	double d,x1,x2,x3,y1,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	d=f(x1,y1,x2,y2)+f(x1,y1,x3,y3)+f(x2,y2,x3,y3);
	printf("%.2lf",d);
	
	return 0;
} 
