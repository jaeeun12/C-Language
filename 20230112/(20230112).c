#include <stdio.h>
#define x 5
#define y 5
#define z (x+y)
int main()
{
	int a[x] = {4,6,8,13,15};
	int b[y] = {1,3,5,7,10};
	int c[z];
	int i = 0, j = 0, p = 0;

	while (i < x && j < y) {
		if (a[i] < b[j]) c[p++] = a[i++];
		else c[p++] = b[j++];
	}

	while (i < x)
		c[p++] = a[i++];

	while (j < y)
		c[p++] = b[j++];

	for (i = 0; i < x; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (j = 0; j < y; j++)
		printf("%d ", b[j]);
	printf("\n");

	for (p = 0; p < z; p++)
		printf("%d ", c[p]);
	printf("\n");

	return 0;
}