#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	string str;
	
	cin>>t;
	
	while(t--)
	{
		cin>>str;
		
		int i,count=0;
		
		for(i=0;i<str.length();i++)
		{
			if(str[i]=='x' && str[i+1]=='y')
			{
				count++;
				i = i + 1;
			}
			
			else if(str[i]=='y' && str[i+1]=='x')
			{
				count++;
				i = i + 1;
			}
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}
