#ifndef _MAIN_
#define _MAIN_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_addr(char *ptr);
void print_type(char *ptr);
void print_osabi(char *ptr);
void print_version(char *ptr);
void print_data(char *ptr);
void print_magic(char *ptr);
void check_sys(char *ptr);
#endif
