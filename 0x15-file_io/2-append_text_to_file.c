#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 always success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, j = 0;
	/*variables*/
	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
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
