#include<bits/stdc++.h>
using namespace std;

int main(){
    double v,d,ans; 
    int i;
	cin>>v>>d; 
	for (i=1;i*(i+1)*d<v*2;i++);
	ans=ceil(v/d)+i-1;
	cout<<ans;
	return 0;
}
