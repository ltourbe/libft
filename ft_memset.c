#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{	
		((unsigned char *)b)[i] = (char)c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char dest[] = "GeeksForGeeks is for programming geeks.";
	char dest1[] = "GeeksForGeeks is for programming geeks.";
	ft_memset(dest + 13, '.', 8);
	printf("%s\n", dest);
	memset(dest1 + 13, '.', 8);
	printf("%s\n", dest1);
}
