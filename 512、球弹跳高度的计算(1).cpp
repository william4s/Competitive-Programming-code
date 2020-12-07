#include<bits/stdc++.h>
using namespace std;

int main(){
	double t,h,ans=0;
	cin>>h;
	t=h;
	for (int i=0;i<10;i++)
		{
			h*=0.5;
		}
	ans=(2*t-h)/(1-0.5)-t-h*2; 
	cout<<ans<<endl<<h;
	
	return 0;
} 
 //2*x+2*(x/2)+2*(x/4)+2*(x/8)+...-x=(A1-An*q)/(1-q)-A1 
