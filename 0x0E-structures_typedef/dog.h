#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - data of a dog
 * @name: name of a dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog sog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
