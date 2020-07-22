#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int array[6];
		
		for(int i=0;i<6;i++)
		{
			cin>>array[i];
		}
		
		int p = array[5];
		
		for(int i=0;i<5;i++)
		{
			array[i] = array[i] * p;
		}
		
		int sum = 0;
		
		for(int i=0;i<5;i++)
		{
			sum = sum + array[i];
		}
		
		if(sum <= 120)
		cout<<"No"<<endl;
		
		else
		cout<<"Yes"<<endl;
	}
	
	return 0;
}
