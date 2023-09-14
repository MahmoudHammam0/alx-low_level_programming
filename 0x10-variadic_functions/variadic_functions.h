#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _putchar(char);
/**
 * struct print - struct to be used in print all function
 * @x: format character
 * @ptr: function pointer to print corresponding function
 */
typedef struct print
{
	char x;
	void (*ptr)();
} fmt;
#endif
