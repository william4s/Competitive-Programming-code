#include<bits/stdc++.h>
using namespace std;
struct coin
{
	int m,v;
	double s;
}c[200];
bool cmp(coin a,coin b){
	return a.s>b.s;
}
int main(){
	int n,t,i,j;
	double ans=0,an=0;	
	cin>>n>>t;
	for (i=0;i<n;i++) 
	{
		cin>>c[i].m>>c[i].v;
		c[i].s=(double)c[i].v/c[i].m;	
	}	
	sort(c,c+n,cmp);
	for (i=0;i<n;i++)
	{
		if (ans>=t) break;
		if ((t-ans)>c[i].m) {
			ans+=c[i].m;   an+=c[i].v; //cout<<c[i].v<<endl;
		}
		else{
			an+=(double)c[i].s*(t-ans);  //cout<<c[i].s*(t-ans)<<endl;
			ans=t; 
		}
	}
	printf("%.2lf",an);
	return 0;
} 
