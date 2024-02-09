#include "main.h"

/**
 * get_endianness - Check if the machine is little or big endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
    unsigned int check = 1;
    char *byteCheck = (char *)&check;

    return (*byteCheck);
}

