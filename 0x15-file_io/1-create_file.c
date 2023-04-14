#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - a function that creates a file in c.
 * @filename: the name of the file to be created.
 * @text_content: the content of the file to be created.
 * Return: return 1 if successful and -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "w");
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);
	return (1);
}
