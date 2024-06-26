#ifndef MAIN_H
#define MAIN_H
#define UNNSED(x) (void)x
#define BUFFER_SIZE 1024


/*Standard Libraries*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>


/*Defined functions*/
int _printf(char *str, ...);
int print_int(int num);
int print_unsigned(unsigned int num);
char *print_bin(int num);
char *decimal_to(int num, int base);
char *cap_hex_str(char *hex_str);



#endif
