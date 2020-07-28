#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,pro=1;
	cin>>n;
	
	int arr[n],i;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		pro = pro * arr[i];
	}
	
	for(i=0;i<n;i++)
	{
		cout<<pro / arr[i]<<" ";
	}
	
	return 0;
}
