#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - outputs characters
 */
int _putchar(char c);
/**
 * _islower - is lower
 */
int _islower(int c);
/**
 * _isalpha - if aphabet
 */
int _isalpha(int c);
/**
 * _abs - abs
 */
int _abs(int n);
/**
 * _isupper - super
 */
int _isupper(int c);
/**
 * _isdigit - checks for digits
 */
int _isdigit(int c);
/**
 * _strlen - outputs lenght of a string
 */
int _strlen(char *s);
/**
 * _puts - puts
 */
void _puts(char *s);
/**
 * _strcpy - copies string
 */
char *_strcpy(char *dest, char *src);
/**
 * _atoi - atoi
 */
int _atoi(char *s);
/**
 * strcat - concatenates strings
 */
char *_strcat(char *dest, char *src);
/**
 * _strncat - strncat
 */
char *_strncat(char *dest, char *src, int n);
/**
 * _strncpy - string copy
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - strcmp
 */
int _strcmp(char *s1, char *s2);
/**
 * _memset - memset
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * _memcpy - memcpy
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strchr - strchr
 */
char *_strchr(char *s, char c);
/**
 * _strspn - strspn
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strpbrk - strpbrk
 */
char *_strpbrk(char *s, char *accept);
/**
 * _strstr - strstr
 */
char *_strstr(char *haystack, char *needle);
#endif
