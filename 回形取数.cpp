#include<stdio.h>
#include<string.h>
int main(){
	
	int n,m,i,j,k,x,y;
	int a[300][300]={0};
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
	  for (j=0;j<n;j++)
	  scanf("%d",&a[j][i]);
	k=n*m;
	x=0;
	y=-1;//x=j=n   y=i=m
	while(k)
	{
		while(a[x][++y]!=-1&&y<m)
		{
			printf("%d ",a[x][y]);
			a[x][y]=-1;
			k--;
		}
		y--; //ÅÐ¶ÏÊ±»á¶à+¡ª 
		while(a[++x][y]!=-1&&x<n) 
		{
			printf("%d ",a[x][y]);
			a[x][y]=-1;
			k--;
		}
		x--;
		while(a[x][--y]!=-1&&y>=0)
		{
			printf("%d ",a[x][y]);
			a[x][y]=-1;
			k--;
		}
		y++;
		while(a[--x][y]!=-1&&x>=0)
		{
			printf("%d ",a[x][y]);
			a[x][y]=-1;
			k--;
		}
	    x++;
	}
	
	return 0;
}
