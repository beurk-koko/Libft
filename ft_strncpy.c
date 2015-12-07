
#include "libft.h"

char	*ft_strncpy (char *dst, const char *src, size_t n)
{
	int	cpy;
	int	paste;

	cpy = 0;
	paste = 0;
	if (src == NULL)
		return (NULL);
	while (n > 0)
	{
		dst[paste] = src[cpy];
		cpy++;
		paste++;
		n--;
	}
	return (dst);
}
