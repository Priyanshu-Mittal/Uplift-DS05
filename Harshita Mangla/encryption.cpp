#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

char *remove(char *str)
{
	int i = 0, j = 0;
	
	while(str[i])
	{
		if(str[i] != ' ')
			str[j++] = str[i];
		i++;
	}
	
	str[j] = '\0';
	return str;
}

int main()
{
	char str[82],new_str[82];
	
	cin>>str;
	
	strcpy(new_str,remove(str));
	
	int length = strlen(new_str);
	
	float sq = sqrt(length);
	
	int row = floor(sq);
	
	int col = ceil(sq);
	
	if(row >= sq)
		col = row;
	else
		col = row + 1;
		
	for(int j=0;j<col;j++)
	{
		for(int i=j;i<length;i+=col)
		{
			cout<<new_str[i];
		}
		cout<<' ';
	}
	return 0;
}
