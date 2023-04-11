#include "main.h"

/**
 *create_file- a function that creates a file
 *@filename: name of the file
 *@text_content: NULL terminated string to write to the file
 *Return: filename
 */
int create_file(const char *filename, char *text_content)
{
	int fp, len = 0, check = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		check = write(fp, text_content, len);
		if (check != len)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
