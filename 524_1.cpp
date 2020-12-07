#include<stdio.h>


struct
	{
		int num;
		char name[10];
		char sex;
		char job;
		union
		{
			int clas;
			char pos[10];
		}cate;
	}per[2];
int main(){
	int i;
	for (i=0;i<2;i++){
		printf("please enter the data of person:\n");
		scanf("%d %s %c %c",&per[i].num,per[i].name,&per[i].sex,&per[i].job);
		if (per[i].job=='s')
			scanf("%d",&per[i].cate.clas);
		else if (per[i].job=='t')
			scanf("%s",per[i].cate.pos);
		else
			printf("input error!");
	}
	printf("\n");
	printf("No. name sex job class/position\n");
	for (i=0;i<2;i++)
	{
		if (per[i].job=='s')
			printf("%-6d%-10s%-4c%-4c%-10d\n",per[i].num,per[i].name,per[i].sex,per[i].job,per[i].cate.clas);
		else
			printf("%-6d%-10s%-4c%-4c%-10s\n",per[i].num,per[i].name,per[i].sex,per[i].job,per[i].cate.pos);	
	}
	return 0;
} 
