<<<<<<< HEAD
#include "main.h"
#include <unistd.h>
/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *
 *  Return: On success 1.
 *  On error, -1 is required, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
#include <unistd.h>

/**
 * _putchar - This writes the char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set correctly.
 */
int _putchar(char c)

{
        return (write(1, &c, 1));
>>>>>>> 250ebdf9694cce1cf435607cd458ffb08b9c65f9
}
