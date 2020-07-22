#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int array[n];
		int frequency[1005] = {0};
		
		for(int i=0;i<n;i++)
		{
			cin>>array[i];
			frequency[array[i]]++;
		}
		
		int unique[1005] = {0};
		int flag = 0;
		
		for(int i=0;i<1005;i++)
		{
			if(frequency[i]>0)
			unique[frequency[i]]++;
		}
		
		for(int i : unique)
		{
			if(i>1)
			{
				flag = 1;
				break;
			}
		}
		
		if(flag==1)
		cout<<"NO\n";
		
		else
		{
			int visited[1005] = {0};
			visited[array[0]] = 1;
			int i = 0;
			
			for(i=1;i<n;i++)
			{
				if(array[i]==array[i-1])
				continue;
				
				if(visited[array[i]]==1)
				break;
				visited[array[i]] = 1;
			}
			
			if(i==n)
			cout<<"YES\n";
			
			else
			cout<<"NO\n";
		}
	}
	
	return 0;
}
