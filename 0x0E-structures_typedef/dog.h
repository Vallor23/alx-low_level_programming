#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents the information about the dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure represents information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
/*Define a new type dog_t as an alias for struct dog*/
typedef struct dog dog_t;


/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to struct dog to initialize
 * @name: Name to initialize
 * @age: Age to initialize
 * @owner: Owner to initialize
 *
 * Description: This function initializes a variable of type struct dog
 * with the provided name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 * If any of these elements is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d);
#endif /* DOG_H */
