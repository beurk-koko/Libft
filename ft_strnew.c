#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	index;

	index = 0;
	str = (char*)malloc(sizeof(size));
	if (str == NULL)
		return (NULL);
	while (size > 0)
	{
		str[index] = '\0';
		size--;
	}
	return (str);
}