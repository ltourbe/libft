#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	h;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		h = i;
		while (needle[j] == haystack[h] && h < len)
		{
			j++;
			h++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[h - ft_strlen(needle)]);
		i++;
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", strnstr(av[1], av[2], 4));
	printf("%s\n", ft_strnstr(av[1], av[2], 4));
}
