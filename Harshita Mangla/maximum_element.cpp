#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack <long int> s,m;
	m.push(-1);
	
	int n,t,x;
	cin>>n;
	
	while(n--)
	{
		cin>>t;
		
		if(t==1)
		{
			cin>>x;
			s.push(x);
			
			if(x>=m.top())
			{
				m.push(x);
			}
		}
		
		else if(t==2)
		{
			int q = s.top();
			
			if(q==m.top())
			{
				m.pop();
			}
			s.pop();
		}
		
		else if(t==3)
		{
			cout<<m.top()<<endl;
		}
	}
	return 0;
}
