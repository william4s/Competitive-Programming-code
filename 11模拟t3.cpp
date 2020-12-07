#include <bits/stdc++.h>
using namespace std;
int d[1004][1004];
int main() {
    int i,j,m,n,ans;
    cin>>m>>n;
    for(i=1;i<=n;i++)
        d[1][i]=n-i+1;

    for(i=2;i<=m;i++)
        if(i&1)
            for(j=n;j>=1;j--)
                d[i][j]=(d[i-1][j-1] + d[i][j+1]) % 10000;
        else
            for(j=1;j<= n; j++)
                d[i][j] =(d[i-1][j+1]+d[i][j-1])%10000;
    
	ans=m&1?d[m][1]:d[m][n];
    cout<<ans;

    return 0;
}

