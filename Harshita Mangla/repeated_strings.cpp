// Repeated Strings

#include<iostream>
using namespace std;

int main()
{
    string s;
    
	cin >> s;
    
	long long n;
    
	cin >> n;
    
    long long numA = 0;
    
	for(int i = 0; i < s.size(); i++) {
    	if(s[i] == 'a') {
    		numA++;
    	}
    }
    
    long long answer = (n/s.size())*numA;
    
    for(int i = 0; i < n%s.size(); i++) {
    	if(s[i] == 'a') {
    		answer++;
    	}
    }
    
	cout<<answer;
    
	return 0;
}
