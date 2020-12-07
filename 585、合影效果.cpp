#include<bits/stdc++.h>
using namespace std;
double m[44],f[44]; 
bool cmp(double x,double y)
{
	return x>y;
}
int main(){
	double h;
	string s;
	int n,m_m=0,f_m=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>s>>h;
		if (s=="male")
			m[m_m++]=h;
		else
			f[f_m++]=h;
	}
	sort(m,m+m_m);
	sort(f,f+f_m,cmp);
	for (int i=0;i<m_m;i++)
		printf("%.2lf ",m[i]);
	for (int i=0;i<f_m;i++)
		printf("%.2lf ",f[i]);
	return 0;
}

