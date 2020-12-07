#include<bits/stdc++.h>
using namespace std;
struct syc
{
	string name;
	long cj,time,rating;
}a[3030];

bool cmp(syc x,syc y)
{
	if (x.cj==y.cj&&x.time!=y.time)
		return x.time<y.time;
	if (x.cj==y.cj&&x.time==y.time)
		return x.rating>y.rating;
	 
	return x.cj>y.cj;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    int n; 
    cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i].name>>a[i].cj>>a[i].time>>a[i].rating;
	
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++)
		cout<<a[i].name<<' '<<a[i].cj<<' '<<a[i].time<<' '<<a[i].rating<<"\n";
	return 0;
} 
