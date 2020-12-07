#include<bits/stdc++.h>
using namespace std;

int g(int x,int y)
{
	if (x%y==0) return y;
	return g(y,x%y);
}
int main(){
	int n,i,j,k;
	int h[1010],w[1010];
	double t[1010];
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>h[i]>>w[i];
			t[i]=(h[i]*1.0)/(w[i]*1.0);
		}
	double max=-1.0,min=5.5;
	int maxi,mini;
	for (i=0;i<n;i++)
		{
			if (max<=t[i]) {
				max=t[i];
				maxi=i;
			}
			if (min>=t[i]){
				min=t[i];
				mini=i;
			}
		}
	
	int q;
	q=g(h[maxi],w[maxi]);

	cout<<h[maxi]/q<<'/'<<w[maxi]/q<<' ';
	q=g(h[mini],w[mini]);
	cout<<h[mini]/q<<'/'<<w[mini]/q;
	return 0;
}
