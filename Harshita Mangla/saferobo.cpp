#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		cin>>s;
		int sa,sb;
		cin>>sa>>sb;
		
		int a=0,b=0,i;
		for(i=1;i<=s.length();i++)
		{
			if(s[i] == 'A')
			a = i;
			
			if(s[i] == 'B')
			b = i;
		}
		
		int f=0;
		
		while(a<s.length() && b>=0)
		{
			a = a + sa;
			b = b - sb;
			
			if(a == b)
			{
				cout<<"unsafe"<<endl;
				f++;
		    }
		}
		
		if(f == 0)
		cout<<"safe"<<endl;
	}
	
	return 0;
}
