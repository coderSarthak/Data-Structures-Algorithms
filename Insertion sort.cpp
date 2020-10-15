#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ar[6];
	int temp,i,j,n;
	cout<<"Enter how many Elements you want to enter=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"doing insertion sort"<<endl;
	
	for(i=1;i<n;i++)
	{
		temp=ar[i];
		j=i-1;
	    while(j>=0 && ar[j]>temp)
	     {
		    ar[j+1]=ar[j];
		    j=j-1;
	      }
	    ar[j+1]=temp;
    }
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
		
}

