#include <stdio.h>
#include <stdlib.h>
/**
 * @s: holds the filename string
 */
int main(int argc, char *argv[])
{
	char *s[];

        s = __FILE__;
	printf("%s\n", s);
	return (0);
}
