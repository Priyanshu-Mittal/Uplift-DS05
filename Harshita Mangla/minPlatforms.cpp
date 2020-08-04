#include<bits/stdc++.h>
using namespace std;

findPlatform(int arr[], int dep[], int n)
{
	sort(arr, arr+n);
	sort(dep, dep+n);
	
	int platNeed = 1, result = 1, i = 1, j = 0;
	
	while(i<n && j<n)
	{
		if(arr[i] <= dep[j])
		{
			platNeed++;
			i++;
		}
		
		else if(arr[i] > dep[j])
		{
			platNeed--;
			j++;
		}
		
		if(platNeed > result)
		{
			result = platNeed;
		}
	}
	return result;
}

int main()
{
	int arr[] = {900, 940, 950, 1100, 1500, 1800};
	int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"minimum number of platforms required ="
		<<findPlatform(arr, dep, n);
		
	return 0;
}
