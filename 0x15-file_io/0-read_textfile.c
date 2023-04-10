#include "main.h"
/**
 *read_textfile -  a function that reads a file
 *@filename:name of the file
 *@letters:number of letters
 *Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t all, bytes;

	FILE *ptr = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (!ptr)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		return (0);
	}
	all = fread(buffer, 1, letters, ptr);
	fclose(ptr);
	if (all == 0)
	{
		return (0);
	}
	bytes = fwrite(buffer, 1, all, stdout);
	if (bytes != all)
	{
		return (0)
	}
	return (bytes);
}
