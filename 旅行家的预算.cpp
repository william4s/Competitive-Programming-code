#include<bits/stdc++.h>
using namespace std;

int main(){
	double x,c,l,d[3000],p[3000],v[3000];//x总距离  c为邮箱容量 
	int n,i,j,k;                //l为每升油行驶距离  n为加油站个数 
	cin>>x>>c>>l>>n;
	for (i=1;i<=n;i++) 
		cin>>d[i]>>p[i];
	d[n+1]=x-d[n];
	if (n==0&&c*l<x){
		cout<<"No Solution";
		return 0;
	}
	for (i=0;i<=n;i++)
	{
		if (c*l<d[i+1]) {
			cout<<"No Solution";
			return 0;
		}
	}

	return 0;
} 
