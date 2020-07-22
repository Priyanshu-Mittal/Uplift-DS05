#include<stdio.h>
#include<stdlib.h>
int main()
{
    int date,month,year,i,leap=0,days,t;

    scanf("%d",&t);

    while(t--)
    {
    	scanf("%d:%d:%d",&year,&month,&date);

    	if(year%4==0)
     	{
	        if(year%400==0)
	        leap=1;
	
	        else if(year%100==0)
	         leap=0;
	
	        else
	         leap=1;
        }
     	else
     	leap=0;

    	if(month==1 || (month==2 && leap) || month==3 || month ==5 || month==7 || month ==8 || month==10 || month==12)
     	{

	        if(month==2)
	         	days=29-date;
	
	        else
	         	days=31-date;
        }
     
        else
        {

	        if(month==2 &&!leap )
	        	days=59-date;
	
	        else
	        	days=61-date;
        }

    printf("%d\n",days/2+1);
    }
    return 0;
}
