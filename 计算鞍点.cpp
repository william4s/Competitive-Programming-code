#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
int max[5],min[5];
int a,i,j,k;
for (i=0;i<5;i++)
  {
  	max[i]=INT_MIN;
  	min[i]=INT_MAX;
  }
for (i=0;i<5;i++)
  for (j=0;j<5;j++)
  {
  	cin>>a;
  	if (a>max[i]) max[i]=a;
  	if (a<min[j]) min[j]=a;
  }
  int pd=1;
  for (i=0;i<5;i++)
   for (j=0;j<5;j++)
   {
   	if (max[i]==min[j]) 
   	{
   		cout<<i+1<<j+1<<max[i];
	   //printf("%d %d %d",i+1,j+1,max[i]);
	   pd=0;
	   return 0;
	}
   }
   cout<<"not found";
return 0;	
} 
