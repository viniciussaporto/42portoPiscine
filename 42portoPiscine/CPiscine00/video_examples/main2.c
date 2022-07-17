#include <stdio.h>

int main()
{
	int a;
	int b;
	
	a = 42;
	b = 12;
	printf("Hello %d World %d\n", a, b);
	b = a;
	a = 24;
	printf("Ola %i Mundo %d\n", a, b);
}