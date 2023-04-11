#include "main.h"

/**
 *append_text_to_file - a function that appends text
 *@filename:name of the file
 *@text_content: null terminated string to add at the end of file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int add = 0, check = 0;
	FILE *ptr = fopen(filename, "a");

	if (!ptr)
	{
		return (-1);
	}

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != 0)
	{
		while (text_content[add] != '\0')
		{
			add++;
		}
		check = fwrite(text_content, sizeof(char), add, ptr);
		if (check != add)
		{
			fclose(ptr);
			return (-1);
		}
	}
		fclose(ptr);
		return (1);
}

