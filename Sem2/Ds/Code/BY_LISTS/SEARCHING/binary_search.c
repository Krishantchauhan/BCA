#include <stdio.h>
int Bin(int a[], int s);
void main()
{
	int a[100], i, s, j, t;
	printf("Enter the size of an array\n");
	scanf("%d", &s);
	printf("Enter the %d Elements\n", s);
	for (i = 0; i < s; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("After Sorted\n");
	for (i = 0; i < s; i++)
		printf("%d \n", a[i]);
	int hold;
	hold = Bin(a, s);
	if (hold != -1)
	{
		printf("Not Present\n");
	}
	else
		printf(" Present\n");
}
int Bin(int a[], int s)
{
	int data;
	printf("Enter the data to Search\n");
	scanf("%d", &data);
	int l, r;
	l = 1;
	r = s - 1;
	int k;
	while (l < r)
	{
		int mid = 0;
		mid = (l + r) / 2;
		if (data == a[mid])
		{
			//	k=1;
			return mid;
		}
		else if (data < a[mid])
		{
			// k=0;
			r = mid - 1;
		}
		else
		{
			// k=0;
			l = mid + 1;
		}
	}
	return -1;
}
