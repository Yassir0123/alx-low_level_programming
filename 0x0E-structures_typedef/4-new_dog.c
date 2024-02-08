#include <stdlib.h>
#include "dog.h"

/**
* _strlen - give length
* @s: pointer
* Return: length
*/
int _strlen(char *s)
{
int i;
int c;
c = 0;
for (i = 0; s[i] != '\0'; i++)
{
c++;
}
return (c);
}
/**
* *_strcpy - give copy
* @dest: pointer
* @src: pointer
* Return: length
*/
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
* new_dog - dog
* @name: no
* @age: ag
* @owner: own
* Return: infos
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int nom;
int owns;
dog_t *dogo;
if (name == NULL || owner == NULL)
{
return (NULL);
}
nom = _strlen(name) + 1;
owns = _strlen(owner) + 1;
dogo = malloc(sizeof(dog_t));
if (dogo == NULL)
{
return (NULL);
}
dogo->name = malloc(sizeof(char) * nom);
dogo->owner = malloc(sizeof(char) * owns);
if (dogo->name == NULL || dogo->owner == NULL)
{
free(dogo->name);
free(dogo->owner);
free(dogo);
return (NULL);
}
dogo->name = _strcpy(dogo->name, name);
dogo->owner = _strcpy(dogo->owner, owner);
dogo->age = age;
return (dogo);
}
