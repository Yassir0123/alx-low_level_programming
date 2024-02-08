#include "main.h"
/**
 * append_text_to_file - app
 * @filename: info
 * @text_content: string
 * Return: ret
 */
int append_text_to_file(const char *filename, char *text_content)
{
int x, w, cc = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (cc = 0; text_content[cc];)
cc++;
}
x = open(filename, O_WRONLY | O_APPEND);
w = write(x, text_content, cc);
if (x == -1 || w == -1)
return (-1);
close(x);
return (1);
}
