#include <bits/stdc++.h>
using namespace std;

int main() 
{       
    long int n;
    cin>>n;
    long int a[n],i,k;
    for(i=0;i<n;++i)
        cin>>a[i];
          
    cin>>k;
      
    sort(a,a+n);  
    cout<<a[n-1]<<endl<<a[n-k]<<endl;   
   
	return 0;
}
