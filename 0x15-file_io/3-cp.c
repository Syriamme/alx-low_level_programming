#include "main.h"
/**
 *main-  a function that copies content from one file to another
 *@argc: argument count
 *@arg: argument as string
 *Return: Always 0 (success)
*/
int main(int argc, char *arg[])
{
	FILE *file_cop, *file_pas;
	char buffer[1024];
	int bytesr, bytesw;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_cop = fopen(arg[1], "r");
	if (file_cop == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		return (-98);
	}
	file_pas = fopen(arg[2], "w");
	if (file_cop == NULL)
	{
		return (-98);
	}
	while ((bytesr = fread(buffer, 1, 1024, file_cop)) > 0)
	{
		bytesw = fwrite(buffer, 1, bytesr, file_pas);
		if (bytesw != bytesr)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
			exit(99);
		}
	}
	if (ferror(file_cop))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %sn", arg[1]);
		exit(98);
	}
	if (fclose(file_cop) == -1 || fclose(file_pas) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
		return (100);
	}
	return (0);
}
