#include<bits/stdc++.h>
using namespace std;
int main(){
	double x1,x2,y1,y2,ans;
	cin>>x1>>y1>>x2>>y2;
	ans=fabs(x1-x2)+fabs(y1-y2); 
	printf("%.3lf",ans);
	
}
