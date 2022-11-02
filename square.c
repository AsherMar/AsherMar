#include <stdio.h>

int square(int x)
{
	return x*x;
}

int main()
{
	int a;
	int b;
	a = 6;
	b = square(2);
	int c = a + b;
	printf("%i\n", c);
	return 0;
}
