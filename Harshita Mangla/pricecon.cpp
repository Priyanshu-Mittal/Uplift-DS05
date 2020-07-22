#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k,i,sum=0;
		cin>>n>>k;
		
		int arr[n];
		
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		for(i=0;i<n;i++)
		{
			if(arr[i] > k)
			{
				int x = arr[i] - k;
				sum = sum + x;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
