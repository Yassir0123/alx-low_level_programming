#include <stdlib.h>
#include "dog.h"
/**
* init_dog - info
* @dogo: dog
* @na: name
* @ag: age
* @ow: owner
*/
void init_dog(struct dog *dogo, char *na, float ag, char *ow)
{
if (dogo != NULL)
{
dogo->name = na;
dogo->age = ag;
dogo->owner = ow;
}
}
