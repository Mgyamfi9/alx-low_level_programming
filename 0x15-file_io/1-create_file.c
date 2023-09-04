#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 always success
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i, j = 0;
	/*variables*/
	if (!filename)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fp, text_content, j);
		if (i != j)
			return (-1);
	}
	close(fp);
	return (1);
}
