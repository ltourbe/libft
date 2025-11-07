#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	while (i > 0)
	{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i--;
	}
	((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
	return (dst);
}

int	main(void)
{
	char	src[] = "ABCDEFGH";
	char	src1[] = "ABCDEFGH";

	ft_memmove(src + 2, src, 5);
	printf("%s\n", src);
	memmove(src1 + 2, src1, 5);
	printf("%s\n", src1);
}
