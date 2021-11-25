#include <stdio.h>
int binarySearch(int a[], int item, int menor, int maior)
{
	if (maior <= menor)
		return (item > a[menor])? (menor + 1): menor;

	int mid = (menor + maior)/2;

	if(item == a[mid])
		return mid+1;

	if(item > a[mid])
		return binarySearch(a, item, mid+1, maior);
	return binarySearch(a, item, menor, mid-1);
}

void insertionSort(int a[], int n)
{
	int i, loc, j, k, selected;

	for (i = 1; i < n; ++i)
	{
		j = i - 1;
		selected = a[i];

		loc = binarySearch(a, selected, 0, j);

		while (j >= loc)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = selected;
	}
}

int main()
{
	int n = 3000, i, x, a[n];
	for(x = 0; x < n; x++)
		a[x] = rand();

	insertionSort(a, n);

	printf("Sort: \n");
	for (i = 0; i < n; i++)
		printf("%d ",a[i]);

	return 0;
}
