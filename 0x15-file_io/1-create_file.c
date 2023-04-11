#include "main.h"

/**
 *create_file- a function that creates a file
 *@filename: name of the file
 *@text_content: NULL terminated string to write to the file
 *Return: filename
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0, check = 0;
	FILE *ptr;

	if (filename == NULL)
	{
		return (-1);
	}

	ptr = fopen(filename, "w");
	if (!ptr)
	{
		return (-1);
	}
	if (!text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		check = fwrite(text_content, sizeof(char), len, ptr);
		if (check == 1)
		{
			fclose(ptr);
			return (-1);
		}
	}
	fclose(ptr);
	return (1);
}			
