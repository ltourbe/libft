#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char source[] = "This is the source string";
	char target[] = "This is the target string";
	char source1[] = "This is the source string";
	char target1[] = "This is the target string";

	ft_memcpy(target, source, strlen(source));
	printf("%s\n", target);
	memcpy(target1, source1, strlen(source));
	printf("%s\n", target1);
}
