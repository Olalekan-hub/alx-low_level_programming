#include <stdio.h>
/*
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
long int l;
long long int ll;
float d;
char c;

printf("size of a char: %lu byte(s)\n", sizeof(c));
printf("size of an int: %lu bytes(s)\n", sizeof(i));
printf("size of long int: %lu bytes(s)\n", sizeof(l));
printf("size of long long: %lu byte(s)\n", sizeof(ll));
printf("size of float: %lu byte(s)\n", sizeof(d));
return (0);
}
