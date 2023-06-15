#include <stdio.h>
/**
 * main - Size is not grandeur, and territory does not make a nation
 * Return:0
 */
int main(void)
{
	printf("Size of int: %zu byte(s)\n",(unsigned long)sizeof(int));
	printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(char));
	 printf("Size of long: %zu byte(s)\n", (unsigned long)sizeof(long));
	 printf("Size of long long: %zu byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
