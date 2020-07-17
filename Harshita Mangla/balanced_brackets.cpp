#include<bits/stdc++.h>
using namespace std;

bool balance(string expr)
{
	stack <char> s;
	char x;
	
	for(int i = 0; i<expr.length(); i++)
	{
		if(expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
		{
			s.push(expr[i]);
			continue;
		}
		
		if(s.empty())
			return false;
			
		switch(expr[i])
		{
			case')':
				x = s.top();
				s.pop();
				if(x == '{' || x== '[')
					return false;
				break;
			
			case'}':
				x = s.top();
				s.pop();
				if(x == '(' || x == '[')
					return false;
				break;
				
			case']':
				x = s.top();
				s.pop();
				if(x == '(' || x == '{')
					return false;
				break;
		}
	}
	return(s.empty());
}

int main()
{
	int n;
	string expr;
	
	cin>>n;
	
	while(n--)
	{
			cin>>expr;
		
		if(balance(expr))
		{
			cout<<"YES"<<endl;
		}
		
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
