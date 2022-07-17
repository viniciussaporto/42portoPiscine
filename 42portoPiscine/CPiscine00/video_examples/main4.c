#include <stdio.h>

int main()
{
	char c;

	c = 'v';

	printf("%lu %d %c\n", sizeof(c), c, c);

	int i;

	printf("%lu\n", sizeof(i));

	long int j;

	printf("%lu\n", sizeof(j));

	short int h;

	printf("%lu\n", sizeof(h));

	float f;

	f = 10.511429;

	printf("%lu %f\n", sizeof(f), f);

	double d;

	d = 4;

	printf("%lu\n", sizeof(d));
}