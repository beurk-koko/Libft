#include <string.h>

char *ft_strnstr(const char *s1, const char*s2, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	count;

	size = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char *)s1);
	count = 0;
	i = 0;
	while (s1[i])
	{
		while (s1[i + count] == s2[count])
		{
			if (count == len - 1)
				return ((char*) s1 + i);
			count++;
		}
		count = 0;
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main (int ac, char **av)
{
	printf("%s\n", ft_strnstr(av[1], NULL, 1));
	return (0);
}
