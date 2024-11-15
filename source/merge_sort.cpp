#include"header.h"
void merge::merge_sort(int *arr,int l,int m,int h)
{
	int i=l;
	int j=m+1;
	int k=l;

	int temp[1000];

	while(i<=m && j<=h)
	{
		if(arr[i]>=arr[j])
		{
			temp[k++]=arr[j++];
		}
		else
		{
			temp[k++]=arr[i++];
		}
	}

	while(i<=m)
	{
		temp[k++]=arr[i++];
	}
	while(j<=h)
	{
		temp[k++]=arr[j++];
	}

	for(i=l;i<=h;i++)
	{
		arr[i]=temp[i];
	}
}
