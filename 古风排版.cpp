#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,len=0,i,j,x;
    string s;
    cin>>n;
    getchar();
    getline(cin,s);
    len=s.length();
    s[len]='0';
    if(len%n!=0){for(i=0,x=len;i<n-len%n;i++)s[x++]=' ';}
    else x=len;
    for(i=0;i<n;i++)
	{
        for(j=x/n-1;j>=0;j--)
		{
            cout<<s[j*n+i];
        }
        cout<<endl;
    }
}

