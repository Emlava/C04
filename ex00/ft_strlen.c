int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello";
	printf("%d\n", ft_strlen(str));
	return (0);
}*/
