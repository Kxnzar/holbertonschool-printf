#include "main.h"

/**
* _print_int - prints an integer
* @arg: va_list parameter
*
* Return: The number of character printed
*/
int _print_int(va_list arg)
{
	int m = 0;
	int a = 1;
	int val = va_arg(arg, int);

	if (val == INT_MIN)
		return (_print_INT_MIN());

	if (val > INT_MIN && val < INT_MAX)
		a = 0;

	if (val < INT_MIN)
		a += 1;

	if (val < INT_MIN + 1024)
		a += 1;

	if (val > INT_MAX - 1024 && val < INT_MAX)
		a += 1;

	if (val > INT_MAX)
		a += 1;

	if (val <= INT_MAX)
		a += 1;


	if (val < 0)
		a += _putchar('-');

	val = val > 0 ? val : val * -1;

	parse_int(val, val, 1, &m);
	return (int_size(m) + a);
}

/**
* int_size - The integer size
* @n: int parameter
*
* Return: The number of digits
*/
int int_size(int n)
{

	int i = 0;

	for (; n > 1; i++)
		n /= 10;

	return (i - 1);
}

/**
 * parse_int - Converts a integer into a decimal
 * @n: number
 * @r: number max
 * @mul: multiplies
 * @m: pointer
 *
 * Return: Nothing
 */
void parse_int(int n, int r, int mul, int *m)
{
	int f = (n / mul) % 10;

	r -= f * mul;
	mul *= 10;
	*m = mul;

	if (r > 1)
		parse_int(n, r, mul, m);
	_putchar('0' + f);
	return;

}
