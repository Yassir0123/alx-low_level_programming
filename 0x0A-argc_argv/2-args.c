#include <stdio.h>
/**
 * main - print infos
 * @argc: data
 * @argv: data
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
