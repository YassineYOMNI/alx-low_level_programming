#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, s1_len, s2_len;

	/* if s1 or s2 is NULL, treat it as an empty string */
	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	/* find length of s1 and s2 */
	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;

	/* if n is greater than or equal to the length of s2, use the entire s2 */
	n >= s2_len ? n = s2_len : n;

	/* allocate memory for concatenated string */
	result = malloc(sizeof(char) * (s1_len + n + 1));
	if (result == NULL)
		return (NULL);

	/* add s1 and s2 to s */
	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
