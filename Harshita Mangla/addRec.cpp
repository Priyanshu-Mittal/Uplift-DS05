#include<bits/stdc++.h>
using namespace std;

sum(int a, int b)
{
	if(b == 0)
		return a;
	
	return sum(a,b-1)+1;
}

int main()
{
	int a = 5;
	int b = 6;
	
	cout<<sum(a,b);
	return 0;
}
