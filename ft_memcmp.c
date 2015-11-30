#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;
	size_t			index1;
	size_t			index2;

	index1 = 0;
	index2 = 0;
	if (s1 == s2 || n == 0)
		return (0);
	cmp1 = (unsigned char*) s1;
	cmp2 = ( unsigned char*) s2;
	while (index1 <= n)
	{
		if (cmp1[index1] != cmp2[index2])
			return (cmp1[index1] - cmp2[index2]);
		index1++;
		index2++;
	}
	return (0);
}

#include <stdio.h>
int		main (int ac, char **av)
{
	printf("%d\n", ft_memcmp(av[1], av[2], 9));
	return (0);
}