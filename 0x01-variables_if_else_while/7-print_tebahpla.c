#include <stdio.h>
/**
*main - print lowercase alphabets in reverse order and new line 
*
*Description: using the main function
*this program prints "Programming of lowercase in reverse order
*
*Return: 0
*/
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
