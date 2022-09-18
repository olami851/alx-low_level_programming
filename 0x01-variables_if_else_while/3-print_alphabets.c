#include <stdio.h>
/**
*main - print lowercase then uppercase and follow it with new line
*
*Description: using the main function
*this progran prints "Programming lowercase then uppercase with new line
*
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'b' ; ch <= 'r' ; ch++)
{
	putchar(ch);
}
for (ch = 'B' ; ch <= 'R' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
