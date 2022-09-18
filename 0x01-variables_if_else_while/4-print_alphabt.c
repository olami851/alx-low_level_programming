#include <stdio.h>
/**
*main - print lowercase alphabets with new line
*
*Description: using the main function
*this program print "Program lowercase alphabets with new line
*
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
