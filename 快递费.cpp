#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans=0;
	char ch;
	cin>>n>>ch;//�������� ���Ƿ�Ӽ�
	if (n<=1000)
		ans=8;
	else
	{
		if ((n-1000)%500==0) //������������ܱ�500����
			ans=8+(n-1000)/500*4;
		else
			ans=8+(n-1000)/500*4+4;//����500�������Ǿ��ж�Ĳ��֣����Ҫ�Ӹ�4
	}
	if (ch=='y') //�ж��Ƿ�Ӽ� 
		ans=ans+5;
	
	cout<<ans; 

	return 0;
}

