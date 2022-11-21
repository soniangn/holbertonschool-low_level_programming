#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int copy_file1_file2(const char *file1, const char *file2);
int main(int argc, char *argv[]);
#endif /* MAIN_H */
