#include "main.h"

/**
  *create_file - creates a file
  *
  *@filename: name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  *
  *Return: 1 on success, -1 on failure (file can not be created,
  *file can not be written, write “fails”, etc…)
  *
  */

int create_file(const char *filename, char *text_content)
{
	int readwrite, file_desc, index;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (index = 0; text_content[index]; index++)
		;
	readwrite = write(file_desc, text_content, index);

	if (readwrite == -1)
		return (-1);


	close(file_desc);

	return (1);
}
