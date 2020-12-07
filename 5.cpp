#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int i,ty;
}a[10];
bool cmp(stu a,stu b)
{
	return a.ty<b.ty;
}
int main(){
	int min_ty,cz;
	for (int i=1;i<=4;i++)	cin>>a[i].ty,a[i].i=i;
	cin>>min_ty>>cz;
	sort(a+1,a+1+4,cmp);
	if (abs(a[4].ty-a[1].ty<=cz)&&min_ty<=a[1].ty)
	{
		cout<<"Normal\n";
	}
	else
	{
		if ((abs(a[4].ty-a[1].ty>cz)&&abs(a[4].ty-a[2].ty>cz))||(min_ty>a[1].ty&&min_ty>a[2].ty))
			cout<<"Warning: please check all the tires!\n";
		else
		{
			if ((abs(a[4].ty-a[1].ty>cz)))
			{
				cout<<"Warning: please check #"<<a[1].i<<"!\n";
			}
			else if (min_ty>a[1].ty)
			{
				cout<<"Warning: please check #"<<a[1].i<<"!\n";
			}
		}
	}
	
	return 0;
}
