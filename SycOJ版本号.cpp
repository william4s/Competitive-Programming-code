#include<bits/stdc++.h>
using namespace std;
struct syc
{
	char s[110];
	double num;
}a[110];

bool cmp(syc x,syc y)
{
	return x.num<y.num;
}
int main(){
	int i,j,k,n,l;
	double t;
	cin>>n;
	for (i=0;i<n;i++)
		{
			cin>>a[i].s;
			l=strlen(a[i].s);
			
			k=0;
			t=1.0;
			while (a[i].s[k]!='.') //k代表第几位后面有点 
				k++;
			for (j=k-1;j>=0;j--)
			{
				a[i].num+=(a[i].s[j]-'0')*t;
				t*=10; 
			}
			t=0.1;
			a[i].num*=1.0;
			for (j=k+1;j<l;j++)
			{
				if (a[i].s[j]!='.')
				{
					a[i].num+=(a[i].s[j]-'0')*t;
					//cout<<a[i].s[j]-'0'<<' ';
					t*=0.1;
				}
			}
			//printf("%lf",a[i].num);
			//cout<<endl;
		}
	sort(a,a+n,cmp);
	for (i=0;i<n;i++) 
		cout<<a[i].s<<endl;
	return 0;
}
