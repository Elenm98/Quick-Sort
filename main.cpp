#include "QuickS.h"

using namespace std;
int main()
{
	
	int arr[100];
	int n;
		
	do { cin >> n; } while (n < 0);


	for (int i = 0;i < n;i++)

	{
		cin >> arr[i];
	}

	
	QuickSort(arr, 0, n);
	for (int i = 0;i < n;i++)
	{
		cout << arr[i] << "  ";
	}
	
	return 0;

}