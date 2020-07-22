#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int d,m,y,i,j;
		cin>>y>>m>>d;
		
		int count = 0;
		
		if(m <= 7 && m != 2)    
		{
			if(m % 2 != 0)    // months having 31 days
			{
				if(d % 2 != 0)     //odd dates
				{
					for(i=d;i<=31;i=i+2)
					count++;
				}
				
				else           //even dates
				{
					for(i=d;i<=30;i=i+2)
					count++;
				}
			}
			
			else      // months having 30 days
			{
				if(d % 2 != 0)      //odd dates
				{
					for(i=d;i<=29;i=i+2)
					count++;
					count = count + 16;
				}
				
				else         //even dates
				{
					for(i=d;i<=30;i=i+2)
					count++;
					count = count + 15;
				}
			}
		}
		
		else if(m > 7 && m < 12)
		{
			if(m % 2 != 0)    //months having 30 days
			{
				if(d % 2 != 0)    //odd dates
				{
					for(i=d;i<=29;i=i+2)
					count++;
					count = count + 16;
				}
				
				else           //even dates
				{
					for(i=d;i<=30;i=i+2)
					count++;
					count = count + 15;
				}
			}
			
			else      //months having 31 days
			{
				if(d % 2 != 0)   //odd dates
				{
					for(i=d;i<=31;i=i+2)
					count++;
				}
				
				else      //even dates
				{
					for(i=d;i<=30;i=i+2)
					count++;
				}
			}
		}
		
		else if(m == 12)    //month having 31 days
		{
			if(d % 2 != 0)   //odd dates
			{
				for(i=d;i<=31;i=i+2)
				count++;
			}
			
			else     //even dates
			{
				for(i=d;i<=30;i=i+2)
				count++;
			}
		}
		
		else if(m == 2)    //february
		{
			if(y % 100 == 0)
			{
				if(y % 400 == 0)    //leap year
				{
					if(d % 2 != 0)    //odd dates
					{
						for(i=d;i<=29;i=i+2)
						count++;
					}
					
					else    //even dates
					{
						for(i=d;i<=28;i=i+2)
						count++;
					}
				}
				
				else   //non-leap year
				{
					if(d % 2 != 0)   //odd dates
					{
						for(i=d;i<=27;i=i+2)
						count++;
					}
					
					else  //even dates
					{
						for(i=d;i<=28;i=i+2)
						count++;
					}
				}
			}
			
			else
			{
				if(y % 4 != 0)   //non leap year
				{
					if(d % 2 != 0)   //odd dates
					{
						for(i=d;i<=27;i=i+2)
						count++;
					}
					
					else   //even dates
					{
						for(i=d;i<=28;i=i+2)
						count++;
					}
				}
				
				else    //leap year
				{
					if(d % 2 != 0)  //odd dates
					{
						for(i=d;i<=29;i=i+2)
						count++;
					}
					
					else   //even dates
					{
						for(i=d;i<=28;i=i+2)
						count++;
					}
				}
			}
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}
