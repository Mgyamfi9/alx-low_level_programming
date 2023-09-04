#include "main.h"
/**
 * main - copies the content of the file
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: always 0 success
 */
int main(int argc, char *argv[])
{
	int fp_r, fp_w, i, j, k;
	char s[BUFSIZ];
	/*variables*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_r = open(argv[1], O_RDONLY);
	if (fp_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fp_r, s, BUFSIZ)) > 0)
	{
		if (fp_w < 0 || write(fp_w, s, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fp_r);
			exit(99);
		}
	}
	if (i < 0)
	{
		 dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		 exit(98);
	}
	j = close(fp_r);
	k = close(fp_w);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_r);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_r);
		exit(100);
	}
	return (0);
}
