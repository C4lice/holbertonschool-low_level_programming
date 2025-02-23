#include main.h
/**
 * _isalpha - ...
 *
 * Return: ...
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return 1;
	return 0;
}

int main(void)
{
	char test_char = 'G';

	if (_isalpha(test_char))
	printf("%c is an alphabetic character.\n", test_char);
	else
	printf("%c is not an alphabetic character.\n", test_char);

	return 0;
}
