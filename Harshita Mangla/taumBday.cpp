#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int b,w,bc,wc,z;
		cin>>b>>w;
		cin>>bc>>wc>>z;
		
		if(bc+z < wc)
		{
			cout<<(b*bc)+(w*(bc+z))<<endl;
		}
		
		else if(bc>wc+z)
		{
			cout<<(b*(wc+z))+(w*wc)<<endl;
		}
		
		else
		{
			cout<<(b*bc)+(w*wc)<<endl;
		}
	}
	return 0;
}
