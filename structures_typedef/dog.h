#ifndef DOG_H
#define DOG_H
/**
 * struct dog - créer le caractère du chien
 * @name: nom du chien
 * @age: l'âge du chien
 * @owner: propriétaire du chien
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
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
