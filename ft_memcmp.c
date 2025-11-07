#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((const char *) s1)[i] == ((const char *) s2)[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (((const char *) s1)[i] - ((const char *) s2)[i]);
}

int	main(void)
{
	char	s1[] = "Bonjour";
	char	s2[] = "Bonsoir";
	char	s11[] = "Bonjour";
	char	s22[] = "Bonsoir";

	printf("%d\n", ft_memcmp(s1, s2, 3));
	printf("%d\n", memcmp(s11, s22, 3));
}
