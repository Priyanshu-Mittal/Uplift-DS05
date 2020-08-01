#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		
		unordered_map <int,int> mp;
		
		while(n--)
		{
			string s;
			cin>>s;
			
			int len = s.length();
			
			S[len]++;
		}
		
		bool found = true;
		
		for(auto x:S)
		{
			if(x.second % k != 0)
			{
				found = false;
				break;
			}
		}
		
		if(!found)
		{
			cout<<"Not Possible"<<"\n";
		}
		else
		{
			cout<<"Possible"<<"\n";
		}
	}
	return 0;
}
