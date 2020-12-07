#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
char s[50];
scanf("%s",s);
int t=strlen(s);
long sum=0;
   for(int i=0;i<t;i++)
   {
    if (s[i]>='A'&&s[i]<='Z')  
        s[i]=int(s[i]-'A')+10+'0';
    sum+=int(s[i]-'0')*pow(16,t-i-1);
   }
printf("%ld\n",sum);
}
