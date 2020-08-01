#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	int m,q,n;
	
	cin>>m>>q>>n;
	
	unordered_map <int,ll> mp;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		mp[a[i]]++;
		
		int x = a[i], y = a[i];
		
		for(int j=0; j<q; j++)
		{
			x = x - m;
			mp[x]++;
		}
		
		for(int j=0; j<q; j++)
		{
			y = y + m;
			mp[y]++;
		}
	}
	
	ll maxf = INT_MIN;
	
	for(auto i:mp)
		maxf = max(maxf, i.second);
		
	cout<<maxf<<"\n";
	
	return 0;
}
