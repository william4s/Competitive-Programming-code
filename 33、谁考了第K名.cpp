#include<bits/stdc++.h>
using namespace std;
struct stu{
	int xh;
	int cj;
}a[1010];

bool cmp(stu x,stu y)
{
	return x.cj<y.cj;
}
int main(){
	int i,n,k;
	cin>>n>>k;
	for (i=0;i<n;i++)
	cin>>a[i].xh>>a[i].cj;
	sort(a,a+n,cmp);
	cout<<a[n-k].xh<<' '<<a[n-k].cj; 
	
	return 0;
}
