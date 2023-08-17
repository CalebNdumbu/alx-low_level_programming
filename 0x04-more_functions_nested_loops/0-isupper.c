/**
 * _isupper - A function to determine if a character is in uppercase.
 * @c: The character to be examined.
 * Return: Returns 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
