#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int partition_index=start;
	for(int i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[partition_index]);
			partition_index++;
		}
	}
	swap(arr[partition_index],arr[end]);
	return partition_index;
}
void quicksort(int arr[],int start,int end)
{
	if(start<end)
	{
		int Pindex=partition(arr,start,end);
		quicksort(arr,start,Pindex-1);
		quicksort(arr,Pindex+1,end);
	}
}

int main()
{
	int A[]={6,5,7,1,8,9,4};
	int n=sizeof(A)/sizeof(A[0]);
	quicksort(A,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<A[i];
	}

}
