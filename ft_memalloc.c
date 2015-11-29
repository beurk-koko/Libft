#include "libft.h"
#include <stlib.h>

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	index;

	mem = malloc(sizeof(size));
	if (mem == NULL)
		return (NULL);
	while (index < size)
	{
		mem[index] = 0;
		index++;
	}
	return (mem);
}