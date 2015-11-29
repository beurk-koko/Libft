#include <string.h>

void	*ft_memchr(const void * s, int c, size_t n)
{
	unsigned char	*chr;
	size_t			index;

	index = 0;
	chr = (unsigned char *) s;
	while (n > index && chr[index])
	{
		if (chr[index] == (unsigned char) c)
			return (&chr[index]);
		index++;
	}
	return (NULL);
}

#include <stdio.h>

int	main (int ac, char **av)
{
	printf("%s\n", ft_memchr(av[1], '2', 1));
	return (0);
}