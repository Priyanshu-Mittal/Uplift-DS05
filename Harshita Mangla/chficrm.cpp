#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
		
	for(int i=0; i<t; i++)
	{
        int n;
        cin>>n;
        	
        int count=0;
        int arr[3]={0};
        	
        for(int j=0; j<n; j++)
		{
            int x;
            cin>>x;
            	
            if(x==5)
			{
               	arr[0]++; 
            }
            	
            else if(x==10)
			{
                if(arr[0]>=1)
				{
                    arr[1]++;
                    arr[0]--;
                }
                	
                else
				{
                    count++;
                }
            }
            	
			else
			{
                if(arr[1]>=1)
				{
                    arr[2]++;
                    arr[1]--;
                }
                	
                else if(arr[0]>=2)
				{
                    arr[2]++;
                    arr[0]-=2;
                }
                	
                else
				{
                    count++;
                }
            }
            
        }
        	
        if(count==0)
		{
            cout << "YES\n";
        }
        	
        else
		{
        cout<<"NO\n";
        }
	}
	return 0;
}
