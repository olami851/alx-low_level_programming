#include <stdio.h>
/**
*main - print lowercase then uppercase numbers followed by a new line
*
*Description: using the main function
*this program prints "Programming prints lower and upper case alphabets
*
*Return: 0
*/
int main(void)
{char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
        putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
        putchar(ch);
}
putchar('\n');
return (0);
}
