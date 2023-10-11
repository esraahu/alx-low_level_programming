#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member name of a dog
 * @age: Second member age of a dog
 * @owner: Third member owner of a dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
