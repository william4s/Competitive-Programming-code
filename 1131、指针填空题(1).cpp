#include<bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n=5,m=8;
	Swap(&n,&m);
	cout<<n<<" "<<m<<endl;
	cout<<"(1):*a=*b";
	cout<<"(2):*b=temp";
	cout<<"(3):&n,&m";
	return 0;
}

