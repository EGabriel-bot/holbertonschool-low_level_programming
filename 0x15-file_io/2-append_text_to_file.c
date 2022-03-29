#include "main.h"

/**
 * append_text_to_file - check the code
 *@filename: pointer to name of file
 *@text_content: pointer to content of file
 * Return: if success return 1 and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int cnt = 0;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (cnt = 0; text_content[cnt] != '\0'; cnt++)
		{
			;
		}
	}
	write(file, text_content, cnt);

	close(file);

	return (1);
}
