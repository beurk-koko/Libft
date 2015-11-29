#include "libft.h"
#include <stlib.h>

void	ft_memdel(void **ap)
{
	free(&(*ap));
	*ap = NULL
}