/* Enter your solutions in this file */
#include <stdio.h>

float average(int a[], int n)
{
	int sum = 0 ;
	for(int i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	return (float)sum/n;
}


int factors(int n, int ret[])
{
	int x = 0;
	for(int i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			ret[x]=i;
			x++;
			n=n/i;
		}
	 } 
	 return x;
}


int max(int a[], int n)
{
	int max =a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
			{		
				max=a[i];
	}
	

	}
	return max;
}


int min(int a[], int n)
{
	int min =a[0];
	for(int i=1;i<n;i++)
	{if(a[i]<min){
	min=a[i];
}

	}
	return min;
}


int mode(int a[], int n)
{
	int x=1;
	int y=a[0];
	for(int i=0;i<n;i++)
	{
		int count = 1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
			}
			if(count>x){
				x=count;
				y=a[i];
			}	}
		return y;
}
