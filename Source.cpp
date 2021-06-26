#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void selection_sort(int array[], int);

void main()
{
	int arr[10], n;
	printf("How many elements : ");
	scanf("%d", &n);
	printf("enter elements : ");
	for (int i = 0; i<n; i++)
		scanf("%d", &arr[i]);

	selection_sort(arr, n);
	printf("Sorted Array is  : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	_getch();
}

void selection_sort(int a[], int n)
{
	int min_index;			// temporary variable to store the position of minimum element

	for (int i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_index])
			{
				int temp = a[j];
				a[j] = a[min_index];
				a[min_index] = temp;
			}
		}
	}
}

// Worst, Average, Best case Time Complexity = O(n^2)
// Space Complexity = O(1)