#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len - 1;
	while (i > 0)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i--;
	}
	((char *)dst)[i] = ((char *)src)[i];
	return (dst);
}

int	main(void)
{
	char	src[] = "a shiny white sphere";
	char	src1[] = "a shiny white sphere";

	ft_memmove(src + 8, src + 2, 5);
	printf("%s\n", src);
	memmove(src1 + 8, src1 + 2, 5);
	printf("%s\n", src1);
}
