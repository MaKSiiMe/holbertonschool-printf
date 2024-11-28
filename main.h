#ifdef MAIN
#define MAIN

int _putchar(char c);
int _printf(const char *format, ...);

int print_string(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_pointer(va_list args);
int print_percent(va_list args);

int print_number(unsigned int n);

#endif
