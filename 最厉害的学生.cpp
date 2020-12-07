#include<bits/stdc++.h>
using namespace std;
struct stu{
	char n[10];
	int c;
	int m;
	int e;
}a,ans;
int main(){
	int i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%s%d%d%d",a.n,&a.c,&a.m,&a.e);
		if ((a.c+a.m+a.e) > (ans.c+ans.m+ans.e))
		{
			ans=a;
		}
	}
	printf("%s %d %d %d",ans.n,ans.c,ans.m,ans.e);
	return 0;
} 
