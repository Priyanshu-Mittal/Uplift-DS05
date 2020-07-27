#include<bits/stdc++.h>
using namespace std;

int max(int n,int arr[])
{
	int i,max_so_far,max_ending_here;
	max_so_far = INT_MIN;
	max_ending_here = 0;
	
	for(i=0;i<n;i++)
	{
		max_ending_here = max_ending_here + arr[i];
		
		if(max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
		}
		
		if(max_ending_here < 0)
		{
			max_ending_here = 0;
		}
	}
	return max_so_far;
}

int main()
{
	int n,i;
	cin>>n;
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int ans = max(n,arr);
	cout<<ans;
	
	return 0;
}
