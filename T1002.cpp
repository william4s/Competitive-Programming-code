#include<stdio.h>
#include<string.h>
#define inf 0x3f3f3f3f
int map[110][110],dis[110],visit[110];
/*
�����������飺map������Ϊ��ߵ���Ϣ������map[1][2]=3����ʾ1�ŵ��2�ŵ�ľ���Ϊ3
dis������Ϊ��ʼ����ÿ�������̾��룬����dis[3]=5����ʾ��ʼ����3�ŵ���̾���Ϊ5
visit������Ϊ0����1��1��ʾ�Ѿ��߹�����㡣
*/
int gcd(int a,int b) {   //���Լ��
    return !b?a:gcd(b,a%b);     
}
int lcm(int a,int b){      //��С������
    return a/gcd(a,b)*b;    //��gcd���
}
int n,m;
int dijstra()
{
    int i,j,pos=1,min,sum=0;
    memset(visit,0,sizeof(visit));//��ʼ��Ϊ.����ʾ��ʼ��û�߹�
    for(i=1; i<=n; ++i)
    {
        dis[i]=map[1][i];
    }
    visit[1]=1;
    dis[1]=0;
    for(i=1; i<n; i++)
    {
        min=inf;
        for(j=1; j<=n; ++j)
        {
            if(visit[j]==0&&min>dis[j])
            {
                min=dis[j];
                pos=j;
            }
        }
        visit[pos]=1;//��ʾ������Ѿ��߹�
        for(j=1; j<=n; ++j)
        {
            if(visit[j]==0&&dis[j]>dis[pos]+map[pos][j])//����dis��ֵ
                dis[j]=dis[pos]+map[pos][j];
        }
    }
    return dis[n];
}
int main()
{
    int i,j;
    while(~scanf("%d%d",&n,&m),n||m)//n��ʾn���㣬m��ʾm����
    {
        for(i=1; i<=n; ++i)
        {
            for(j=1; j<=n; ++j)
            {
                map[i][j]=inf;//��ʼʱ��ÿ���߸�Ϊ���ֵ
            }
        }
        int a,b,c;
        for(i=1; i<=m; ++i)
        {
            scanf("%d%d%d",&a,&b,&c);
            if(c<map[a][b])//��ֹ���ر�
                map[a][b]=map[b][a]=c;
        }
        int count=dijstra();
        printf("%d\n",count);
    }
    return 0;
}

