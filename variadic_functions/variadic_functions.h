#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - ...
 * @op: ...
 * @f: ...
 */
typedef struct op
{
	char op;
	void (*f)(va_list args);
} op_t;
void printf_char(va_list args);
void printf_int(va_list args);
void printf_string(va_list args);
void printf_float(va_list args);
#endif
