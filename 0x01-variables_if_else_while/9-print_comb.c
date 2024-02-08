#include<stdio.h>
/**
* main - program that will print a string with puts
* Return: always returns 0 (succes)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
