//https://www.codechef.com/problems/EXPCODE1
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;
typedef long double ld;



int main(){
    int t=1;
    //cin>>t;
    while(t--){
        ll n,k;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>k;
        sort(a.begin(),a.end());
        cout<<a[n-1]<<endl<<a[n-k];
    }   
    return 0;
}