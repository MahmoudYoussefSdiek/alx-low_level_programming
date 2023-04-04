#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: string
 *
 * Return: pre_length
 */
unsigned int _strspn(char *s, char *accept)
{
	int s_loop;
	int accept_loop;
	int pre_length;
	int flag;

	pre_length = 0;
	for (s_loop = 0; s[s_loop] != '\0'; s_loop++)
	{
		flag = 0;
		for (accept_loop = 0; accept[accept_loop] != '\0'; accept_loop++)
		{
			if (s[s_loop] == accept[accept_loop])
			{
				pre_length++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (pre_length);
		}
	}
	return (0);
}
