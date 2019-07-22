#ifndef DOG
#define DOG
/**
 * struct dog - Creating a structure for dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: In this structure we include the name, age, and owner of dog.
**/

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif


