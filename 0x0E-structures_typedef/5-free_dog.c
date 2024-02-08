#include <stdlib.h>
#include "dog.h"
/**
* free_dog - dog info
* @dogo: info
*/
void free_dog(dog_t *dogo)
{
if (dogo != NULL)
{
free(dogo->owner);
free(dogo->name);
free(dogo);
}
}
