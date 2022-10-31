#include <stddio.h>
/**
 * main - print out sizes of data types in c
 * code by BRP 
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Sizze of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(s)", (unsigned long)sizeof(f));

Return: 0
}
