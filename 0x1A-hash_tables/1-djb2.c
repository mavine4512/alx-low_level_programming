#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementation of the djb2 algorithm
 * @str: the string to hash
 *
 * Return:The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count;

	return (hash);
}

