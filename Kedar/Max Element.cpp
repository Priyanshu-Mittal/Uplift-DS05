//https://www.hackerrank.com/challenges/maximum-element/problem
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;
typedef long double ld;


int main(){
    int t=1;
    //cin>>t;
    while(t--){
       int n;
       cin>>n;
       stack<ll> s,max;
       max.push(-1);
       ll x,p;
       for(int i=0;i<n;i++){
           cin>>x;
           if(x==1){
               cin>>p;
               s.push(p);
               if(p>=max.top()){
                   max.push(p);
               }
           }
           else if(x==2){
               if(max.top()==s.top()){
                   max.pop();
               }
               s.pop();
           }
           else{
               cout<<max.top()<<endl;
           }
       }
    }   
    return 0;
}
