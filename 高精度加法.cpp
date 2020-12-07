#include<stdio.h>
#include<string.h>

int main(){
	int a[105],b[105],c[105],i,j,k,l1,l2,max,r=0; 
	char s1[105],s2[105];
	scanf("%s%s",s1,s2);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	l1=strlen(s1); l2=strlen(s2); 
	for (i=l1-1;i>=0;i--) a[l1-i-1]=s1[i]-'0';
	for (i=l2-1;i>=0;i--) b[l2-i-1]=s2[i]-'0';	

	if (l1>=l2) max=l1;else max=l2;
	for (i=0;i<=max;i++)
	{
		c[i]=a[i]+b[i]+r;
		r=c[i]/10;
		c[i]=c[i]%10;
        }
        if (c[max]!=0)
      for (i = max; i >= 0; i--)
          printf("%d", c[i]);
         else 
             for (i = max-1; i >= 0; i--)
          printf("%d", c[i]);  
        return 0;
}
