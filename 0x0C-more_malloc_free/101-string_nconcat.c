#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, l, strlen;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
		i++;

	strlen = i + n + 1;
	ptr = malloc(strlen);
	if (ptr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];

	for (l = 0; l < n; l++, k++)
		ptr[k] = s2[l];

	ptr[k] = '\0';
	return (ptr);
}
