//https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;
typedef long double ld;

bool cmp(char b,char c){
    if(b=='(' && c==')')
        return true;
    if(b=='[' && c==']')
        return true;
    if(b=='{' && c=='}')
        return true;
    return false;
}

bool check(string s1){
    stack<char> s;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='(' || s1[i]=='[' || s1[i]=='{'){
            s.push(s1[i]);
        }
        else if(s1[i]==')' || s1[i]=='}' || s1[i]==']'){
            if(s.empty() || !cmp(s.top(),s1[i])){
                return false;
            }
            else
                s.pop();
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}

int main(){
    int t=1;
    cin>>t;
    while(t--){
        
        string s1;
        cin>>s1;
        if(check(s1))
            cout<<"balanced"<<endl;
        else
            cout<<"not balanced"<<endl;
    }   
    return 0;
}