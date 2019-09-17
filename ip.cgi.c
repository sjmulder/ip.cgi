#include <stdio.h>
#include <stdlib.h>

int
main()
{
	char *ip;

	ip = getenv("REMOTE_ADDR");
	printf("Content-Type: text/plain\n\n%s\n", ip ? ip : "null");

	return 0;
}
