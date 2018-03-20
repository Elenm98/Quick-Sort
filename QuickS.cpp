#include "QuickS.h"
int Partition(int arr [] , int first, int last)
{
	int pivot = first;
	int i;
	int j;
	i = first + 1;
	j = first + 1;
	for (j;j <last;j++)
	{
		if (arr[j] <= arr[pivot])
		{
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			i++;
		}
	}
	int temp = arr[i - 1];
	arr[i - 1] = arr[pivot];
	arr[pivot] = temp;
	return i - 1;


}
void QuickSort(int arr[], int first, int last)
{
	if (first <last)
	{
		int p = Partition(arr, first, last);

		QuickSort(arr, first, p);
		QuickSort(arr, p + 1, last);
	}
}