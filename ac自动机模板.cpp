// Keywords Search
// ����������������AC�Զ���ģ���⣬����Ŀ�괮�г����˼���ģʽ��
// ���һ������ǵ���ĩβ�Ļ�out���Ϊtrue,��search��ʱ�����ÿ����㶼��failָ����
// �ҵ�outΪtrue�ľͽ�����Ϊfalse,��ans++
#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
#define maxn 10000000
struct node
{
    int cnt;//�Ƿ�Ϊ�������һ���ڵ�
    node *next[26],*fail;//Trieÿ���ڵ��26���ӽڵ�andʧ��ָ��
    node()
    {
        cnt=0;
        fail=NULL;
        for(int i=0; i<26; i++)
            next[i]=0;
    }
}*root;
node *q[maxn];//����ʧ��ָ���bfs����
char keyword[55];//���뵥��,ģʽ��
char str[1000010];//��Ҫ���ҵ�����
int head,tail;//����ͷβָ��
void insert(char *s,node *p)//�����ַ�������
{
    int i=0,k;
    while(s[i])
    {
        k=s[i++]-'a';
        if(p->next[k]==NULL)
            p->next[k]=new node();
        p=p->next[k];//ָ���ƶ�����һ��
    }
    p->cnt++;//���ʽ�β�ڵ�count + 1�����
}
void build_AC(node *root)//����ʧ��ָ��
{
    head=0;
    tail=1;
    q[head]=root;
    node *temp,*p;
    while(head<tail)//bfs����Trie����ʧ��ָ��
    {
        temp=q[head++];
        for(int i=0; i<26; i++)
        {
            if(temp->next[i])//�ж�ʵ�ʴ��ڵĽڵ�
            {
                // root�µĵ�һ��ڵ��ʧ��ָ�붼ָ��root
                if(temp==root)
                temp->next[i]->fail=root;
                else
                {
                    //���λ��ݸýڵ�ĸ��ڵ��ʧ��ָ��
                    //ֱ��ĳ�ڵ��next[i]��ýڵ���ͬ����
                    //�Ѹýڵ��ʧ��ָ��ָ���next[i]�ڵ�
                    //�����ݵ� root ��û���ҵ�,��ýڵ��ʧ��ָ�� ָ�� root
                    p=temp->fail;//temp Ϊ�ڵ�ĸ�ָ��
                    while(p)
                    {
                        if(p->next[i])
                        {
                            temp->next[i]->fail=p->next[i];
                            break;
                        }
                        p=p->fail;
                    }
                    if(!p)temp->next[i]->fail=root;
                }
                //ÿ����һ����,�Ͱ��������ж��Ӽ������
                //ֱ������Ϊ��
                q[tail++]=temp->next[i];
            }
        }
    }
}
int query(char *str,node *root)
{
    int ans=0,k,len=strlen(str);
    node *p=root;
    //iΪ����ָ�룬pΪƥ�䴮ָ��
    for(int i=0; i<len; i++)
    {
        k=str[i]-'a';
        //��ʧ��ָ�����Ѱ��,�ж�str[i]�Ƿ������Trie����
        while(!p->next[k]&&p!=root)
            p=p->fail;
        p=p->next[k];//�ҵ���pָ��ýڵ�
        if(!p)p=root;//ָ����Ϊ�գ���û���ҵ���֮ƥ����ַ�
        //ָ�����»ص����ڵ�root,�´δ�root��ʼ����Trie��
        node *temp=p;//ƥ��ýڵ��,����ʧ��ָ�����,�ж������ڵ��Ƿ�ƥ��
        while(temp!=root&&temp->cnt!=-1)//ƥ���������andδ�����ʿ���
        {
            ans+=temp->cnt;
            temp->cnt=-1;//����ѷ���
            temp=temp->fail;//����ʧ��ָ�����Ѱ����һ�����������Ľڵ�
        }
    }
    return ans;
}
void del(node *root)
{
    if(root==NULL)return ;
    for(int i=0;i<26;i++)del(root->next[i]);
    delete(root);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        root=new node();
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf(" %s",keyword);
            insert(keyword,root);
        }
        build_AC(root);
        scanf(" %s",str);
        printf("%d\n",query(str,root));
        del(root);
    }
}
