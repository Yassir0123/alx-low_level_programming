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
putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
