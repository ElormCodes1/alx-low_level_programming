#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */

int main(void)
{
        char alpha [26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        for (int i=0; i<=25; i++)
        {
        putchar(alpha[0]);
        alpha[0]++;
        }


        return (0);
}

