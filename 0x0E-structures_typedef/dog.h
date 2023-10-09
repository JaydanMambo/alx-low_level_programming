#ifndef DOG_STRUCT
#define DOG_STRUCT

/**
 * struct dog - structure definition of a dog
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: The owner of the dog
 *
 * Description: data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
