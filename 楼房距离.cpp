#include<bits/stdc++.h>
using namespace std;

int main(){
	long w,n,m;
	long x1,y1,x2,y2;
	cin>>w;
	cin>>n>>m;
	if (((n-1)/w)%2!=0) {
		x1=(n-1)/w+1;
		y1=w-(n-1)%w;
	}else
	{
		x1=(n-1)/w+1;
		y1=(n-1)%w+1;
	} 
	
	
	if (((m-1)/w)%2!=0) {
		x2=(m-1)/w+1;
		y2=w-(m-1)%w;
	}else
	{
		x2=(m-1)/w+1;
		y2=(m-1)%w+1;
	} 
	//cout<<x1<<' '<<y1<<endl<<x2<<' '<<y2;
	cout<<abs(x1-x2)+abs(y1-y2);
	return 0;
}
