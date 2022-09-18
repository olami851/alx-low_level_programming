#include <stdio.h>
/**
*main - print alphabets in lowercase and followed by new line
*
*Description: using the main function
*this program prints "Programming that print alphabets in lowercase
*
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
