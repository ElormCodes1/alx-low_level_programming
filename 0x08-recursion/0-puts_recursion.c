#include "main.h"

void _puts_recursion(char *s);

int main(void)
{
        _puts_recursion("Elorm");
        return (0);
}

void _puts_recursion(char *s)
{
        if (*s)
        {
                _putchar(*s);
                _puts_recursion(++s);
        }
        else
        {
                _putchar("\n");
        }
}
