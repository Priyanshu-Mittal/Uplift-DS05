#include<bits/stdc++.h>
using namespace std;

bool checkSort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] > arr[i+1])
		{
			if(abs(arr[i] - arr[i+1] == 1))
			{
				swap(arr[i],arr[i+1]);
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int arr[] = {1, 0, 3, 2};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(checkSort(arr, n))
	{
		cout<<"yes";
	}
	
	else
	{
		cout<<"no";
	}
	
	return 0;
}
