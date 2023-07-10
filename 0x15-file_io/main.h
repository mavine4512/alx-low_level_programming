#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_fd(int fd);
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file);
void close_fb(int fd);
char is_elf_file(int fd, void **header);
void print_elf_header(void *header);
void print_section(int id, void *header);
void print_magic(void *header);
void print_class(void *header);
void print_data(void *header);
void print_version(void *header);
void print_os_abi(void *header);
void print_abi_version(void *header);
void print_type(void *header);
void print_entry_pt_addr(void *header);
#endif
