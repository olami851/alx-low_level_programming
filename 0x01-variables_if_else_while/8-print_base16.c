#include <stdio.h>
/**
*
*main - print base 16 number in lowercase and new line
*
*Description: using the main function
*this program print "Programming of base 16 numbers in lowercase
*
*Return: 0
*/
int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
	putchar(c);
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
