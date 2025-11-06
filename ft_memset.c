#include <string.h>
#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{	
		((char *)dest)[i] = (char)c;
		i++;
	}
	return (dest);
}

int	main(void)
{
	char dest[] = "GeeksForGeeks is for programming geeks.";
	char dest1[] = "GeeksForGeeks is for programming geeks.";
	ft_memset(dest + 13, '.', 8*sizeof(char));
	printf("%s\n", dest);
	memset(dest1 + 13, '.', 8*sizeof(char));
	printf("%s\n", dest1);
}
