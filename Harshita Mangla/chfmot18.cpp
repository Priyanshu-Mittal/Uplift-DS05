#include<iostream>
using namespace std;

int main()
{
	long t;
	cin>>t;
	
	while(t--)
	{
		long long s,n;
		cin>>s>>n;
		
		if(s==1 || s==n)
		{
			cout<<"1"<<endl;
		}
		
		else if(s>n)
		{
			int q = s/n;
			int r = s%n;
			
			if(r != 0)
			{
				if(r%2 == 0)
				{
					cout<<q+1<<endl;
				}
				
				else
				{
					cout<<q+2<<endl;
				}
		    }
		    
		    else
		    {
		    	cout<<q<<endl;
			}
		}
		
		else
		{
			if(s%2 == 0)
			{
				cout<<"1"<<endl;
			}
			
			else
			{
				cout<<"2"<<endl;
			}
		}
	}
	return 0;
}
