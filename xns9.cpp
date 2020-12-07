#include<stdio.h>
#include<string.h>
int n,m,pd,ans=0;
void dt(int a,int b)   //当前第b项数列 
{
	int i;
	if (b%2!=0)  //奇数项 
	{
		for (i=1;i<a;i++)  //下一项要比它小 
		{   if (b<m)
			   {
			//   printf("%d项: %d ",b+1,i);
			   dt(i,b+1);
			   
		       }
			else
			 {
			    ans=(ans+1)%10000;
		//	   printf("*%d\n",a);
			   break;
		     }
		}
	} 
	else  
	if (b%2==0)//偶数 
	{
		for (i=a+1;i<=n;i++) //下一项比它大 
		{
			if (b<m) 
			 { 
		//	   printf("%d项: %d ",b+1,i);
			   dt(i,b+1);
			  
		       }
			else
			if (b==m)
			 {
			   ans=(ans+1)%10000;
			 // printf("!%d\n",a);
			  break;
		     }
		}
	}
	

	
}

int main(){
	int i;
	scanf("%d%d",&m,&n);
	for (i=2;i<=n;i++)
	{
//	printf("1项: %d ",i);
	dt(i,1);
    }
	printf("%d",ans);
	return 0;
}
