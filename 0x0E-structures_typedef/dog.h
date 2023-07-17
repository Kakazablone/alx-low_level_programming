#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - Contains a dog's basic info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Who is the owner of the dog
 *
 * Description: No description for this struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
