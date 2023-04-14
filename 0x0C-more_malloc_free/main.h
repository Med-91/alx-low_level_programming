#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _puts(char *str);
int is_all_digit(char *s);
char *str_mul(char *s1, char *s2);
int _strlen(char *str);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *_memset(char *s, char b, unsigned int n);

#endif

