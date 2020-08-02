#include<bits/stdc++.h>
using namespace std;

struct item
{
	int value, weight;
	
	item (int value, int weight) : value(value), weight(weight)
	{}
};

bool cmp(struct item a, struct item b)
{
	double r1 = (double)a.value / a.weight;
	double r2 = (double)b.value / b.weight;
	return r1 > r2;
}

double fractionalKnapsack(int w, struct item arr[], int n)
{
	sort(arr, arr+n, cmp);
	
	int curWeight = 0;
	double finalvalue = 0.0;
	
	for(int i=0; i<n; i++)
	{
		if(curWeight + arr[i].weight <= w)
		{
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}
		
		else
		{
			int remain = w - curWeight;
			finalvalue += arr[i].value * ((double) remain / arr[i].weight);
			break;
		}
	}
	return finalvalue;
}

int main()
{
	int w = 50;
	
	item arr[] = {{60,10},{100,20},{120,30}};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout<<"maximum value we can obtain = "
		<<fractionalKnapsack(w, arr, n);
		
	return 0;
}
