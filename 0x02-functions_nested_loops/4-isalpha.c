#include "main.h"

#include <ctype.h>

/**
*_isalpha - check for alphabetic character
*@a: verify character
*Return: 0
*/
int _isalpha(int a)
{
if (a >= 65 && a <= 90)
{
return (1);
}
else if (a >= 97 && a <= 122)
{
return (1);
}
else
return (0);
}
