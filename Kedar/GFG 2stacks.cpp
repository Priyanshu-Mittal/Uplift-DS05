//https://www.geeksforgeeks.org/implement-two-stacks-in-an-array/
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;
typedef long double ld;


int main(){
    int t=1;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       stack<int> a,b;
       int x,y,z;
       for(int i=0;i<n;i++){
           cin>>x>>y;
           if(x==1){
               if(y==1){
                   cin>>z;
                   a.push(z);
               }
               else if(y==2){
                   if(!a.empty()){
                       cout<<a.top()<<" ";
                       a.pop();
                   }
                   else{
                       cout<<"-1"<<" ";
                   }
               }
           }
           else if(x==2){
               if(y==1){
                   cin>>z;
                   b.push(z);
               }
               else if(y==2){
                   if(!b.empty()){
                       cout<<b.top()<<" ";
                       b.pop();
                   }
                   else{
                       cout<<"-1"<<" ";
                   }
               }
           }
       }
       cout<<endl;
    }   
    return 0;
}
