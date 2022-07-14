#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int t = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + t) >= 97 && *(s + t) <= 122)
		*(s + t) = *(s + t) - 32;
	t++;
	while (*(s + t) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + t) == sep_words[i])
			{
				if ((*(s + (t + 1)) >= 97) && (*(s + (t + 1)) <= 122))
					*(s + (t + 1)) = *(s + (t + 1)) - 32;
				break;
			}
		}
		t++;
	}
	return (s);
}
