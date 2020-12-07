#include<iostream>
#include<vector>
using namespace std;
int n,m,tmp,i,j,k;
int main(){
	vector<int> stu;
	cin>>n>>m;
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		stu.push_back(tmp);
	}
	for (i=0;i<m;i++){
		cin>>tmp;
		cout<<stu[tmp-1]<<endl;
	}
	return 0;
} 
