#include "main.h"
/**
* rev_string - give reverse
* @s: pointer
*/
void rev_string(char *s)
{
int i;
int c;
int k;
char o;
c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
i = 0;
k = c / 2;
while (k--)
{
o = s[c - i - 1];
s[c - i - 1] = s[i];
s[i] = o;
i++;
}
}
