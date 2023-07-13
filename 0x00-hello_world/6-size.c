#include <stdio.h>
/**
* * main - A program that prints the size of various computer types
* Return: 0 (success)
**/
int main(void)
{
char a;
int b;
long int c;
float d;
printf("size of a char: %lu bytes\n", (unsigned long)sizeof(a));
printf("size of an int: %lu bytes\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(c));
printf("size of a float: %lu bytes\n", (unsigned long)sizeof(d));
return (0);
}
