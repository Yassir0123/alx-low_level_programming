#include <stdio.h>
#include <stdlib.h>
/**
 * main - print infos
 * @argc: data
 * @argv: data
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int s;
int j;
s = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
for (j = 0; arg[j] != '\0'; j++)
{
if (arg[j] < '0' || arg[j] > '9')
{
printf("Error\n");
return (1);
}
}
s += atoi(arg);
}
printf("%d\n", s);
return (0);
}
