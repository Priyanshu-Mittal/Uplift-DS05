#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n, int k)
{
	if(n == 1)
		return 0;
		
	sort(arr, arr+n);
	
	int ans = arr[n-1] - arr[0];
	
	int small = arr[0] + k;
	
	int big = arr[n-1] - k;
	if(small > big)
		swap(small, big);
		
	for(int i=1; i<n; i++)
	{
		int sub = arr[i] - k;
		int add = arr[i] + k;
		
		if(sub >= small || add >= big)
			continue;
			
		if(big - sub <= add - small)
			small = sub;
		else
			big = add;
	}
	return min(ans, big-small);
}

int main()
{
	int arr[] = {4, 6};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int k = 10;
	
	cout<<"maximum difference is"
		<<maxDiff(arr, n, k);
		
	return 0;
}
