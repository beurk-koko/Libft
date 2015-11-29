#include <string.h>

void	bzero(void *s, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (NULL);
	while (index < n)
	{
		s[index] = '\0';
		index++;
	}
	return (NULL);
}