#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cpy;
	unsigned char	*paste;

	paste = (unsigned char*)dst;
	cpy = (unsigned char*) src;
	if (cpy <= paste)
	{
		while (len > 0)
		{
			*paste = *cpy;
			paste++;
			cpy++;
			len--;
		}
	}
	else
		memcpy(dst, src, len);
	return (dst);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_memmove(av[1], av[2], 10));
	return (0);
}