#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{	
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int	main(void)
{
	char dest[] = "GeeksForGeeks is for programming geeks.";
	char dest1[] = "GeeksForGeeks is for programming geeks.";
	ft_bzero(dest, 8);
	printf("%s\n", dest);
	bzero(dest1, 8);
	printf("%s\n", dest1);
}
