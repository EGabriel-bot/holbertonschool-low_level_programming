#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int words;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if(buff == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	words = read(file, buff, letters);
	write(STDOUT_FILENO, buff, words);

	free(buff);
	close(file);

	return (words);
}
