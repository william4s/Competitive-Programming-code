#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int sum,n;
int data[1000]={0},book[1000]={0};
void bfs(int t){
	if(t>1){
		if(t==2){
            sum++;
        }
        else if((data[t-2]-data[t-3])*(data[t-1]-data[t-3])<0){//�����±��Ǵ�0��ʼ�ģ�����Ҫ���ȥһ��1 
            sum++;
        }
        else return ;
	}
	for(int i = 1;i <= n;i++){
		if(book[i]==0){
			data[t] = i;//��� 
			book[i] = 1;//��� 
			bfs(t+1);
			book[i] = 0;//���� 
		}
	}
	return ;
}
int main(){
	sum=0;
	scanf("%d",&n);
	bfs(0);
	printf("%d\n",sum); 
	return 0;
}

