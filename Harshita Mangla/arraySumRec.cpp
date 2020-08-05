#include<bits/stdc++.h>
using namespace std;

int arrSum(int arr[], int n)
{	
	if(n == 0)
	{
		return arr[n];
	}
	return arr[n] + arrSum(arr, n-1);
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int result = arrSum(arr, n);
	
	cout<<result<<"\n";
	
	return 0;
}
