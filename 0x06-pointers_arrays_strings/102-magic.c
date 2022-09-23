#include <stdio.h>

/*
 *main - write your line of code so that the program prints a[2] = 98
 *Insrucions: - no use of a
 *            - do not modify p
 *            - write one statement
 *            - do not code anything else than this line of code
 */
int main(void)
{
	int n;
	int a[4];
	int *p;

	a[5] = 1024;
	p = &n;

	*(p + 4) = 98;
	printf("a[5] = %d\n", a[5]);
	return (0);
}
