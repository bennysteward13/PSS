#include<stdio.h>
int main()
{
	int arr[] = {12, 34, 1, 5, 8, 60};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 5;
	int i;
	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
			printf("Element found at index %d\n", i);
			break;
		}
	}
	if(i == n)
	{
		printf("Element not found in the array.\n");
	}
	return 0;
}
