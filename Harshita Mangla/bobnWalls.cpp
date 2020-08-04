#include<bits/stdc++.h>
typedef long long ll;
#define N 100000
using namespace std;

int main()
{
	ll int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		
		int maxH = arr[0];
		
		int wallCount = 1;
		
		for(int i=1; i<n; i++)
		{
			if(arr[i] > maxH)
			{
				wallCount++;
				maxH = arr[i];
			}
		}
		cout<<wallCount<<"\n";
	}
	return 0;
}
