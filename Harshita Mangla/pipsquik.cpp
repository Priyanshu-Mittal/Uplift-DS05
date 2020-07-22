#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,h,y1,y2,l,ti,x;
		int count = 0;
		
		cin>>n>>h>>y1>>y2>>l;
		
		while(n--)
		{
			cin>>ti>>x;
				
			if(ti == 1)
			{
				if((h-y1) > x && l>0)
				{
					if(l-1 != 0)
					count++;
					l--;
			    }
				else if(l != 0)
				count++;
			}
					
			else
			{
				if(y2 < x && l > 0)
				{
				if(l-1 != 0)
				count++;
				l--;
			    }
					
				else if(l != 0)
				{
					count++;
				}
			}
		}
		
		cout<<count<<endl;
	}
	
	return 0;
}
