#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
    cin.tie(0);
	char ch;
	string str;
	int start,s,i,j,end;
	cin>>ch;
	getchar(); 
	getline(cin,str);
    if(ch=='C') 
    {
    	start=0,s=1; 
    	for(i=start;i<str.length();i++)
    	{
    		if(str[i+1]==str[i])
    		{
    			s=s+1;
			} 
			if(str[i+1]!=str[i])
			{
				if(s!=1)
				cout<<s<<str[i];
				else cout<<str[i];
				s=1;
				start=i+1;
			}
		} 
	}
	else if(ch=='D')
	{
		start=0,end=str.length();
		for(i=0;i<str.length();i++)
		{
			if(str[i]<'0'||str[i]>'9')
			{
				end=i;
				int num=0,a=1;
				for(int j=end-1;j>=start;j--)
				{
					num=num+a*(str[j]-'0');
					a=a*10;
				}
				if(num!=0)
					for(j=0;j<num;j++)cout<<str[i];
				else 
					cout<<str[i];
				start=end+1; 
			}
			else continue;
		}
	} 
	return 0;
} 

