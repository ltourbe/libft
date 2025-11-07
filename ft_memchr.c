#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (((const unsigned char *)s)[n] == (unsigned char) c)
			return ((void *)&s[n]);
		n--;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "Bonjour";
	char	str1[] = "Bonjour";

	printf("%s\n", (char *)ft_memchr(str, 'j', 7));
	printf("%s\n", (char *)memchr(str1, 'j', 7));
}
