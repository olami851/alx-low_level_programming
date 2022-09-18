#include <stdio.h>
/**
*main - print single digit of base ten and new line
*
*Description: using the main function
*this program prints "Programming single digit and new line
*
*Return: 0
*/
int main(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
