#include<stdio.h>
#include<string.h>
int n,m,pd,ans=0;
void dt(int a,int b)   //��ǰ��b������ 
{
	int i;
	if (b%2!=0)  //������ 
	{
		for (i=1;i<a;i++)  //��һ��Ҫ����С 
		{   if (b<m)
			   {
			//   printf("%d��: %d ",b+1,i);
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
	if (b%2==0)//ż�� 
	{
		for (i=a+1;i<=n;i++) //��һ������� 
		{
			if (b<m) 
			 { 
		//	   printf("%d��: %d ",b+1,i);
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
//	printf("1��: %d ",i);
	dt(i,1);
    }
	printf("%d",ans);
	return 0;
}
