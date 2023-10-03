#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creats file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string
 *
 * Return: 1 success or -1 error
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));

		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
