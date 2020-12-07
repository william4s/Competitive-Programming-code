#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
int i,j,t;
unsigned long sum=0,k;
char s[50];
scanf("%s",s);
t=strlen(s);

   for(i=0;i<t;i++)
   {
    if (s[i]>='A'&&s[i]<='Z')  
        s[i]=s[i]-'A'+10+'0';
    k=1;
      for (j=0;j<t-i-1;j++)
      {
      	k=k*16;
	  }
    sum+=(s[i]-'0')*k;
   }
printf("%lld",sum);
   return 0; 
}
