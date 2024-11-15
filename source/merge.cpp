#include"header.h"
merge::merge(int *number,int l,int h)
{
	int mid;
	if(l!=h)
	{
		mid=(l+h)/2;
		merge(number,l,mid);
		merge(number,mid+1,h);
		merge_sort(number,l,mid,h);
	}
}
