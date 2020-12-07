#include<bits/stdc++.h>
using namespace std;
int a[16];
void dg(int n)
{
	int i;
	if (n==0) return;
	if (n==1){
		cout<<"2(0)";
		return;
	}
	if (n==2){
		cout<<"2";
		return;
	}
	i=15;
	while(a[i]>n&&i>=0) i--;
	cout<<"2";
	if (i>1)
	{
		cout<<"(";
		dg(i);
		cout<<")";
		
	}
	n-=a[i];
	if (n) cout<<"+";
	dg(n);
	
	
	return ;

}
int main(){
	int n,i,j,k,t;
	cin>>n;
	t=1;
	for (i=0;i<=15;i++)
	{
		a[i]=t;
		t*=2;
	}
	dg(n);
	return 0;
} 
