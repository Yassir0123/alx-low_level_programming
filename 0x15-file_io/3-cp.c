#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * creates_buffer - Allocates
 * @file: The name
 * Return: A point
 */
char *create_buffer(char *file)
{
char *b;
b = malloc(sizeof(char) * 1024);
if (b == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (b);
}
/**
 * close_file - Closes
 * @fd: The file
 */
void close_file(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
 * main - Copies
 * @argc: The numbe
 * @argv: An array
 * Return: 0
 * Description: Info
 */
int main(int argc, char *argv[])
{
int f, t, r, w;
char *buf;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buf = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
r = read(f, buf, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do
{
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}
w = write(t, buf, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}
r = read(f, buf, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} 
while (r > 0);
free(buf);
close_file(f);
close_file(t);
return (0);
}
