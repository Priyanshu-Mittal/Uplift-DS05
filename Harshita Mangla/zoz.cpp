#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n,k,i;
		cin>>n>>k;
		
		long sum = 0;
		
		long long arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			sum = sum + arr[i];
		}
		
		long long count = 0;
		
		for(i=0;i<n;i++)
		{
			long long res = sum - arr[i];
			
			if(arr[i]+k > res)
			{
				count++;
			}
			res = sum;
		}
		cout<<count<<endl;
	}
	return 0;
}
