#include <stdio.h>
/**
*main - print lowercase alphabets in reverse order
*
*Description: using the main function
*this program prints "Programming of alphabets in reverse order
*
*Return: o
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
