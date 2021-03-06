#include "main.h"
/**
 * main - copies the content of a file to another file
 *@ac: argument count
 *@av: argument value
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, letters = 1, w, fd_close1, fd_close2;
	char *buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (letters > 0)
	{
		letters = read(fd_from, buff, 1024);
		if (fd_from == -1 || letters == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		w = write(fd_to, buff, letters);
		if (fd_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	fd_close1 = close(fd_from);
	if (fd_close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from);
		exit(100);
	}
	fd_close2 = close(fd_to);
	if (fd_close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to);
		exit(100);
	}
	return (0);
}
