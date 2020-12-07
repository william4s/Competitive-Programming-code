#include <iostream>
using namespace std;
int k,s1,s2,s3,t;
int main(){
cin >>k;
for (int i=10000;i<=30000;i++){
	if (i/100 % k==0)
	   if ((i/10-i/10000*1000)%k==0)
	      if ((i-i/1000*1000)%k==0)
	       {
	       	cout <<i<<endl;
	       	t=t+1;
		   }
}
if (t==0) cout<<"No";     
	
	



	return 0;
} 
