#include<bits/stdc++.h>
using namespace std;
int main(){
	char t;
	int x,a=0,b=0;
	cin>>t;	
	while(t!='#')
	{
		if(t-'0'==1) a++;
		else if(t-'0'==0)  b++;
		scanf("%c",&t);
	}
	printf("%d %d",a,b);
	return 0;
}
