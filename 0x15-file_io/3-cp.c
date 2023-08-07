#include "main.h"

void IO_query(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	IO_query(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	IO_query(dest, -1, argv[2], 'W');
	while (n == 1024)
	{
		n = read(src, buffer, sizeof(buffer));
		if (n == -1)
			IO_query(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, n);
		if (wrote == -1)
			IO_query(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	IO_query(close_src, src, NULL, 'C');
	close_dest = close(dest);
	IO_query(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * IO_query - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void IO_query(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
