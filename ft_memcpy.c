#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((unsigned char *)dest)[n] = ((const unsigned char *)src)[n];
		n--;
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
