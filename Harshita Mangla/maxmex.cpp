#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,mex,i;
		cin>>n>>mex;
		
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		int s = sizeof(arr)/sizeof(arr[0]);
		sort(arr,arr+s);
		
		int count=0;
		
		for(i=0;i<n;i++)
		{
			if(arr[i] > mex)
			{
				count++;
				//cout<<arr[i]<<endl;
			}
			
			else if(arr[i]<mex)
			{
				float d = mex-arr[i];
				
				float sumTotal = (d/2)*((2*arr[i])+(d-1));
				float sum = 0;

				for(int k=i;arr[k]<mex;k++)
				{
					sum = sum + arr[k];
				}
				
				if(sumTotal == sum)
				{
					count++;
					//cout<<arr[i]<<endl;
				}
			}
		}
		
		if(count>0)
		{
			cout<<count<<endl;
		}
		
		else
		{
			cout<<"-1"<<endl;
		}
	}
	
	return 0;
}
