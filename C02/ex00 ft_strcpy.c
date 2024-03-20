#include <stdio.h>
#include <string.h>

int main(void)
{
	char str_s[] = "what a beatiful string!";
	char str_d[] = "        ";

	strcpy(str_d, str_s);
	printf("%s\n", str_d);
	return (0);
}
