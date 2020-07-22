#include <bits/stdc++.h>

using namespace std;

int n, x, h[105];

int main() 
{
    cin>>n;
    for(int i = 0; i < n; i++)
	{
        cin>>x;
        h[x]++;
    }
    cout<< n - *max_element(h + 1, h + 100 + 1);
    return 0;
}
