#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - this function appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: the contents of the file to be appended.
 * Return: return 1 on sucess and -1 of failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "a");
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
