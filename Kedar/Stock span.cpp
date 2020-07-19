//https://www.geeksforgeeks.org/the-stock-span-problem/
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
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       int c=1;
       cout<<c<<" ";
       for(int i=1;i<n;i++){
           c=1;
           for(int j=i-1;j>=0;j--){
                if(a[i]>a[j])
                    c++;
                else
                    break;
           }
           cout<<c<<" ";
       }
       cout<<endl;
    }   
    return 0;
}
