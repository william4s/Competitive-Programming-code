#include<bits/stdc++.h>
using namespace std;
fun (int n)
{
	int i;
	for (i=2;i*i<=n;i++)
	if (n%i==0) return 0;
return 1;
}
int main(){
	int m,n;
    int i,j;
 
    cin>>m>>n;
    for(i=m; i<=n; i++) 
        for(j=i; j>=2; j--) 
            if( (i%j==0) && fun(j) )
            {
                cout<<j;
                if(i!=n)
                    cout<<",";
                break;
            }
    
	return 0;
} 
