#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	return (*ptr == 1);
}
