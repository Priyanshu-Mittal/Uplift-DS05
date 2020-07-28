#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int i;
		string s;
		
		cin>>s;
		
		int aSum = 0, bSum = 0, ra = n, rb = n;
		
		for(i=0; i<2*n; i++)
		{
			if(i % 2 == 0)
			{
				ra--;
				if(s[i] == '1')
				{
				    aSum++;
				}
			}
			
			if(i % 2 != 0)
			{
				rb--;
				if(s[i] == '1')
				{
				    bSum++;
				}
			}
			
			if((aSum - bSum > rb) || (bSum - aSum > ra))
			{
				cout<<i+1<<"\n";
				break;
			}
		}
		if(aSum == bSum)
		{
			cout<<2*n<<"\n";
		}
	}
	return 0;
}
