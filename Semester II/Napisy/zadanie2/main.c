#include <stdio.h>

unsigned int length(const char* string)
{
	unsigned int i = 0;
	while (string[i] != '\0')
		i++;
	return i;
}

int main(void)
{
	const char* t1 = "Ala Ma Kota a kot Ma AlE";

	printf("%d\n", length(t1));
	return 0;
}