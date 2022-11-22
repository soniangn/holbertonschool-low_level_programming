#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int copy_file(char *file_from, char *file_to);
/**
 * main - entry point
 * Description: checks the number of arguments passed
 *                              and call cp()
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
        /* Checks number of arguments passed */
        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        /* calls the cp function */
        copy_file(argv[1], argv[2]);

        return (0);
}

/**
 * copy_file - copies content
 * Description: copies the content of a file to another
 * @file_from: pointer to the source file
 * @file_to: pointer to the destination file
 * Return: 0
 */
int copy_file(char *file_from, char *file_to)
{
        int open_file_from, open_file_to, read_file_from;
        char buf[1024];

        /* Handles absence of file_from */
        if (file_from == NULL)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
                exit(98);
        }

        /* Creates or truncates file_to */
        open_file_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
        if (open_file_to == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
                exit(98);
		}
        /* Open and read file_from */
        open_file_from = open(file_from, O_RDONLY);
        if (open_file_from == -1)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
                exit(98);
        }
        /* Copy file1 to file2 */
        read_file_from = 1;
        while (read_file_from > 0)
        {
                read_file_from = read(open_file_from, buf, 1024);
                if (read_file_from == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
                        exit(98);
                }
                write(open_file_to, buf, read_file_from);
                if (open_file_to == -1)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
                        exit(99);
                }
        }
        /* Close the opened files and handles their closing*/
        if (close(open_file_to) == -1)
        {
                exit(100);
                dprintf(STDERR_FILENO, "Can't close fd %d\n", open_file_to);
        }
        if (close(open_file_from) == -1)
        {
                exit(100);
                dprintf(STDERR_FILENO, "Can't close fd %d\n", open_file_from);
        }
        return (0);
}
