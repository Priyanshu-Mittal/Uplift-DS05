#include<bits/stdc++.h>
using namespace std;

struct ele
{
	int count, index, val;
};

bool valComp(struct ele a, struct ele b)
{
	return (a.val < b.val);
}

bool freqComp(struct ele a, struct ele b)
{
	if(a.count != b.count)
		return (a.count < b.count);
	else
		return a.index > b.index;
}

void sortByFreq(int arr[], int n)
{
	struct ele element[n];
	for(int i=0;i<n;i++)
	{
		element[i].index = i;
		
		element[i].count = 0;
		
		element[i].val = arr[i];
	}
	
	stable_sort(element, element+n,valComp);
	
	element[0].count = 1;
	
	for(int i=1;i<n;i++)
	{
		if(element[i].val == element[i-1].val)
		{
			element[i].count +=element[i-1].count+1;
			
			element[i-1].count = -1;
			
			element[i].index = element[i-1].index;
		}
		
		else
		{
			element[i].count = 1;
		}
	}
		
	stable_sort(element, element+n, freqComp);
		
	for(int i=n-1, index=0;i>=0;i--)
		if(element[i].count != -1)
			for(int j=0;j<element[i].count;j++)
				arr[index++] = element[i].val;
}

int main()
{
	int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	sortByFreq(arr, n);
	
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
	return 0;
}
