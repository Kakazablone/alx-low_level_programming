#include "main.h"

/**
  *read_textfile - reads a text file and prints it to the POSIX standard output
  *
  *@filename: file to be checked
  *@letters: number of letters to be read and written
  *
  *Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t read_len, write_len;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}

	read_len = read(file_desc, buffer, letters);
	close(file_desc);
	if (read_len == -1)
	{
		free(buffer);
		return (0);
	}
	write_len = write(STDOUT_FILENO, buffer, read_len);
	free(buffer);
	if (read_len != write_len)
		return (0);
	return (write_len);
}
