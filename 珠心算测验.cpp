#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k,a[10010],ans=0,t=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) { scanf("%d",&a[i]); }
	sort(a,a+n); 
	for (i=0;i<n;i++)
		for (j=0;j<i;j++)
		if ((a[i]!=2*a[j])&&binary_search(a,a+n,a[i]-a[j]))
			{
				t++;
				break;
			} 
/*	for (int i = 0; i < n; i++)
 for (int j = 0; j < n && a[j] < a[i]; j++)
 if (a[i] != 2 * a[j] && binary_search(a, a + n, a[i] - a
[j]))
 {
 ans++;
 break;
 }
*/
	printf("%d",t);    
  	return 0;
} 
