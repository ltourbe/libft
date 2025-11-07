#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_toupper(int c)
{
	unsigned char	i;

	i = c;
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}

int	main(void)
{
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", toupper('c'));
}
