#include "main.h"

/**
  *append_text_to_file - appends text at the end of a file.
  *
  *@filename:  is the name of the file
  *@text_content: the NULL terminated string to add at the end of the file
  *
  *Return: 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int readwrite, file_desc, index;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (index = 0; text_content[index]; index++)
			;

		readwrite = write(file_desc, text_content, index);

		if (readwrite == -1)
			return (-1);
	}

	close(file_desc);

	return (1);
}
