#ifndef MAIN_H
#define MAIN_H
/* This file contains the prototypes needed for the project */
/* standar lib */
#include <stdio.h>
/* stdlib.h */
#include <stdlib.h>
/* limits.h */
#include <limits.h>
/* 0. function that allocates memory using malloc. */
void *malloc_checked(unsigned int b);
/* 1. Function that concatenates two strings.*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* 2. Function that allocates memory for an array, using malloc. */
void *_calloc(unsigned int nmemb, unsigned int size);
/* 3. Function that creates an array of integers. */
int *array_range(int min, int max);
/* _putchar - does what the putchar function does */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char **argv);
void print_me(int *sum_result, int len_r)
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r);
int is_digit(char c);
void add_arrays(int *mul_result, int *sum_result, int len_r);
void *_calloc(unsigned int bytes, unsigned int size);
int str_len(char *str);
int _putchar(char c);
#endif
