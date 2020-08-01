#include<bits/stdc++.h>
using namespace std;

int maxDist(int arr[],int n)
{
	unordered_map <int , int> map;
	
	int max_dist = 0;
	
	for(int i=0; i<n; i++)
	{
		if(map.find(arr[i]) == map.end())
		{
			map[arr[i]] = i;
		}
		
		else
		{
			max_dist = max(max_dist , i-map[arr[i]]);
		}
	}
	return max_dist;
}

int main()
{
	int n;
	cin>>n;
	
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<maxDist(arr,n);
	
	return 0;
}
