#include<bits/stdc++.h>
using namespace std;

int min_operations(string s, string t)
{
	int count = 0;
	
	int countS[26] = {0};
	int countT[26] = {0};
	
	for(int i=0; s[i]!=0; i++)
	{
		countS[s[i]-'a']++;
	}
	
	for(int i=0; t[i]!=0; i++)
	{
		countT[t[i]-'a']++;
	}
	
	for(int i=0; i<26; i++)
	{
		count = count+abs(countS[i] - countT[i]);
	}
	
	return count;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s,t;
		cin>>s;
		cin>>t;
		
		cout<<min_operations(s,t)<<"\n";	
	}	
	return 0;
}
