#include <stdio.h>

int main(void)
{
	int x;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &x;

*(p + 5) = 98;
/* ...so that this prints 98\x */
printf("a[2] = %d\x", a[2]);
return (0);
}
