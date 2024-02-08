#include<stdio.h>
/**
* main - program that will print a string with puts
* Return: always returns 0 (succes)
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'e' && a != 'q')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
