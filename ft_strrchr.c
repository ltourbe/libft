#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char) c)
                        return ((char *)&s[i]);
	return (NULL);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", ft_strrchr(av[1], 's'));
	printf("%s\n", strrchr(av[1], 's'));
} 
