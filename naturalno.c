#include<stdio.h>
int main()
{
	int n;
	printf("Natural numbers upto n with a difference of 2");
	scanf("%d", &n);
	for (int i = 0; i <= n; i = i+2)
	{
		printf("%d", i);
		return 0;
	}
}
