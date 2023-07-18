#include "main.h"

/**
 * _isalpha - function to check the lower
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
