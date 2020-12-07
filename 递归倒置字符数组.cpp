#include<bits/stdc++.h>
using namespace std;

char t,s[2000];
int dg(int n,int l)
{
	int i;
	if ((n+1)>(l/2)) return 0;
	t=s[n];
	s[n]=s[l-n-1];
	s[l-n-1]=t;  
	for (i=0;i<l;i++)
		cout<<s[i];
	cout<<endl;
	
	if ((n+1)<=(l/2)) dg(n+1,l);
}

int main(){
	int l,i;
	scanf("%d",&l);
	for (i=0;i<l;i++) cin>>s[i];
	if (l==1) {
		cout<<endl<<s;
		return 0;
	}
	dg(0,l);
	cout<<endl;
	for (i=0;i<l;i++) cout<<s[i];
	return 0;
}
