#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_tolower(int c)
{
	unsigned char	i;

	i = c;
	if (i >= 'A' && i <= 'Z')
		return (i + 32);
	return (i);
}

int	main(void)
{
	printf("%c\n", ft_tolower('C'));
	printf("%c\n", tolower('C'));
}
