#include<iostream>
#include<conio.h>
void swap(int*,int*);
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
};

int main()
{
	int min;
	int ar[]={8,2,6,0,11,1};
	int n=sizeof(ar)/sizeof(ar[0]);
	for(int i=0;i<n;i++)
	{
		min=i;  //here we selected the first element index value to compare with others
		for(int j=i+1;j<n;j++)   // loop starts with 2nd element i.e to be compared //
		{
			if(ar[j]<ar[min])        //if the  element ar[j] i.e is less than ar[min] then swap//
			{
				
				swap(&ar[j],&ar[min]); 
				
			}
		}
	}
	for(int k=0;k<n;k++)
	{
		std::cout<<ar[k]<<" ";
	}
	return 0;
}
