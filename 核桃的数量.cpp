#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,a,b,c,ans;
	scanf("%d%d%d",&a,&b,&c);
	for (i=1;i<=a*b*c;i++)
	if (i%a==0&&i%b==0&&i%c==0) {
		printf("%d",i);
		return 0;
	}
	
	return 0;
}
