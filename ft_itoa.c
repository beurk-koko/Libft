#include <stdio.h>
#include <stdlib.h>

int	count(int n)
{
	int i;

	i = 1;
	while (n > 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	
	i = count(n);
	str = (char*)malloc(sizeof(str) * i);
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

int	main(int ac, char **av)
{
	printf("%s\n", ft_itoa(-13748));
	return (0);
}