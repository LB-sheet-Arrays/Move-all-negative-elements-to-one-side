//first method is to sort the array nut TC=O(nlogn)
//This method's TC => O(n)

//ISSUE NOT WORKING

#include<iostream>                       
#include<cstdlib>       //to dynamically allocate memory

using namespace std;

void PrintArray(int a[],int n)
{
	cout<<"\n";
	cout<<" { ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<" } ";
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void move(int a[],int n)
{
	//use technique of sorting 0s,1s and 2s without using any sorting algo.
	int l=0;      //left pointer
	int m=0;      //is pointer ko move karna hai, baaki sab fixed hai
	int h=n-1;   //right pointer
	
	while(l<h)
	{
		if(a[m]<0)
		{
			swap(&a[m],&a[l]);
			l++;
			m++;
		}
		else if(a[m]==0)
		{
			m++;
		}
		else if(a[m]>0)
		{
			swap(&a[m],&a[h]);
			h--;	
		}	
	}
	
	cout<<"\nModified array => ";
	PrintArray(a,n);
}

int main()
{
	int *a,n;
	
	cout<<"\nHow many elements do you want in the array? => ";
	cin>>n;
	
	//corner cases:
	if(n<0)
	{
		cout<<"\nSize can't be negative!";
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		//feeding the array 
		for(int i=0;i<n;i++)
		{
			cout<<"\n\nElement no "<<i+1<<" ";
			cin>>a[i];
		}
		move(a,n);
	}
	
return 0;	
}
