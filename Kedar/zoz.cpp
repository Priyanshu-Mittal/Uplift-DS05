//https://www.codechef.com/problems/ZOZ
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;
typedef long double ld;



int main(){
    int t=1;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ll count=0;
        for(int i=0;i<n;i++){
            if(a[i]+k> sum-a[i]){
                count++;
            }
        }
        cout<<count<<endl;
        
    }   
    return 0;
}