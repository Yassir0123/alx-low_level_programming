#include "main.h"
/**
 * read_textfile - info
 * @filename: info
 * @letters: info
 * Return: info
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t ff;
ssize_t x;
ssize_t p;
ff = open(filename, O_RDONLY);
if (ff == -1)
return (0);
buf = malloc(sizeof(char) * letters);
p = read(ff, buf, letters);
x = write(STDOUT_FILENO, buf, p);
free(buf);
close(ff);
return (x);
}
