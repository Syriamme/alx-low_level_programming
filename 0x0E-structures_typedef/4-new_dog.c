#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * str_len - Function to calculate the length of name
 * @str: Pointer to name
 * Return: Length of the string
 */

int str_len(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * mystrcpy - Creates copy of src on dest
 * @src: String to be copied
 * @dest: New address of the string
 * Return: Address of the destination string
 */

char *mystrcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}


/**
 * new_dog - Creates a new dog
 * @name: Element 1
 * @age: Element 2
 * @owner: Element 3
 * Return: Pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *name1;
	char *owner1;

	dog1 = malloc(sizeof(dog_t));

	if (dog1 == NULL)
		return (NULL);
	dog1->age = age;

	if (name != NULL)
	{
		name1 = malloc((str_len(name) * sizeof(char)) + 1);
		if (name1 == NULL)
		{			
			free(dog1);
			return (NULL);
		}
		dog1->name = mystrcpy(name, name1);
	}
	else
		dog1->name = NULL;
	if (owner != NULL)
	{
		owner1 = malloc((str_len(owner) * sizeof(char)) + 1);
		if (owner1 == NULL)
		{
			free(dog1->name);
			free(dog1->owner);
			free(dog1);
			return (NULL);
		}
		dog1->owner = mystrcpy(owner, owner1);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
