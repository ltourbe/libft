#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total);
	return (ptr);
}

int	main(void)
{
	int	n;
	int	*tab;
	int	i;

	n = 5;
	tab = ft_calloc(n, sizeof(int));
	i = 0;
	while (i < n)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	i = 0;
	while (i < n)
	{
		tab[i] = i * 10;
		i++;
	}
	printf("\naprès modif :\n");
	i = 0;
	while (i < n)
	{
		 printf("tab[%d] = %d\n", i, tab[i]);
		 i++;
 	}
	free(tab);
}
