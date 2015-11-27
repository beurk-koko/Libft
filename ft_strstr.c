#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	size;
	int	count;

	size = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char*)s1);
	count = 0;
	i = 0;
	while (s1[i])
	{
		while (s1[i + count] == s2[count])
		{
			if (count == size - 1)
				return ((char*)s1 + i);
			count++;
		}
		count = 0;
		i++;
	}
	return (NULL);
}

int	main (int ac, char **av)
{
	printf("%s\n", ft_strstr(av[1], av[2]));
	return (0);
}
