#include "main.c"
/**
* print_alphabet - print alphabets in lower case
* Description: prints a-z all in lower case
*
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; ++c)
{
_putchar(c);
}
_putchar('\n');
}
