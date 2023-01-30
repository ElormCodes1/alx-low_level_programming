#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - type with properties of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */
struct dog{
	char *name;
	float age;
	char *owner;
}
typedef struct dog dog_t;
/**
 * init_dog - initializes a variable
 * struct dog - structure dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - prints a struct dog
 * struct dog - dog structure
 */
void print_dog(struct dog *d);
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - frees dogs
 * @d: address to be freed
 */
void free_dog(dog_t *d);
#endif
