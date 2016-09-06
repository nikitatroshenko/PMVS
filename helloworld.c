#include <stdio.h>
#include <stdlib.h>
#include "get_hello_message.h"
#include "get_goodbye_message.h"

int main(int argc, char **argv)
{
	char *greeting_str;

	greeting_str = calloc(50, sizeof(char));

	get_hello_message(greeting_str);
	printf("%s\n", greeting_str);

	get_goodbye_message(greeting_str);
	printf("%s\n", greeting_str);

	free(greeting_str);

	return 0;
}
