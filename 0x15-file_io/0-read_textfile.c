#include "main.h"
/**
 * read_textfile - reads a textfile and prints to POSIX
 * @filename: name of file
 * @@letters: letters to read and print
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, i, j;
	char *k;
	/*variables*/
	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	k = malloc(sizeof(char) * letters);
	if (!k)
		return (0);
	i = read(fp, k, letters);
	if (i < 0)
	{
		free(k);
		return (0);
	}
	k[i] = '\0';
	close(fp);
	j = write(STDOUT_FILENO, k, i);
	if (j < 0)
	{
		free(k);
		return (0);
	}
	free(k);
	return(j);
}
