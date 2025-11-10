/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:56:48 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/10 18:28:42 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 
#include <bsd/string.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>
#include <unistd.h>

void   test_isprint(int ac, char **av)
{
        int     i;
        i = 0;
        if (ac == 2)
        {
                while (av[1][i] != '\0')
                {
                        printf("%d\n", ft_isprint(av[1][i]));
                        i++;
                }
        }
}

void   test_isdigit(int ac, char **av)
{
        int     i;
        i = 0;
        if (ac == 2)
        {
                while (av[1][i] != '\0')
                {
                        printf("%d\n", ft_isdigit(av[1][i]));
                        i++;
                }
        }
}

void   test_isalpha(int ac, char **av)
{
	int     i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			printf("%d\n", ft_isalpha(av[1][i]));
			i++;
		}
	}
}

void   test_isalnum(int ac, char **av)
{
 	int i;

 	i = 0;
  	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
 			printf("%d\n", ft_isalnum(av[1][i]));
 			i++;
		}
 	}
}

void	test_isascii(int ac, char **av)
{
	int     i;
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			printf("%d\n", ft_isascii(av[1][i]));
			i++;
		}
	}
}

void	test_strlen(int ac, char **av)
{
	if (ac == 2)
		printf("%zu\n", ft_strlen(av[1]));
}

void	test_strlcat(void)
{
	const char src[] = "bonjour";
	char dest[20] = "oui";
	char dest2[20] = "oui";

	printf("%zu\n", ft_strlcat(dest, src, 8));
	printf("%s\n", dest); 
	printf("%zu\n", strlcat(dest2, src, 8));
	printf("%s\n", dest2);
}

void    test_strlcpy(void)
{
        const char src[] = "bonjour";
        char dest[20];
        char dest2[20];

        printf("%zu\n", ft_strlcpy(dest, src, 5));
        printf("%s\n", dest);
        printf("%zu\n", strlcpy(dest2, src, 5));
        printf("%s\n", dest2);
}

void   test_strncmp(int ac, char **av)
{
        if (ac == 3)
        {
                printf("%d\n", ft_strncmp(av[1], av[2], 5));
                printf("%d\n", strncmp(av[1], av[2], 5));
        }
}

void    test_atoi(int ac, char **av)
{
        (void) ac;
        printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
}

void     test_bzero(void)
{
	char dest[] = "GeeksForGeeks is for programming geeks.";
	char dest1[] = "GeeksForGeeks is for programming geeks.";
	ft_bzero(dest, 8);
	printf("%s\n", dest);
	bzero(dest1, 8);
	printf("%s\n", dest1);
}

void	test_memset(void)
{
	char dest[] = "GeeksForGeeks is for programming geeks.";
	char dest1[] = "GeeksForGeeks is for programming geeks.";
	ft_memset(dest + 23, 'a', 1);
	printf("%s\n", dest);
	memset(dest1 + 23, 'a', 1);
	printf("%s\n", dest1);
}

void     test_calloc(void)
{
        int     n;  
        int     *tab;
        int     i;  

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

void	test_memchr(void)
{
        char    str[] = "Bonjour";
        char    str1[] = "Bonjour";

        printf("%s\n", (char *)ft_memchr(str, 'j', 7));
        printf("%s\n", (char *)memchr(str1, 'j', 7));
}

void     test_memcmp(void)
{
        char    s1[] = "Bonjour";
        char    s2[] = "Bonsoir";
        char    s11[] = "Bonjour";
        char    s22[] = "Bonsoir";

        printf("%d\n", ft_memcmp(s1, s2, 5));
        printf("%d\n", memcmp(s11, s22, 5));
}

void     test_memcpy(void)
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

void	test_memmove(void)
{
        char    src[] = "ABCDEFGH";
        char    src1[] = "ABCDEFGH";

        ft_memmove(src + 2, src, 5);
        printf("%s\n", src);
        memmove(src1 + 2, src1, 5);
        printf("%s\n", src1);
}

void	test_strdup(void)
{
   char *string = "this is a copy";
   char *newstr;
   char *string1 = "this is a copy";
   char *newstr1;

   newstr = ft_strdup(string);
   printf("The new string is: %s\n", newstr);
   newstr1 = strdup(string1);
   printf("The new string is: %s\n", newstr1);
}

void     test_strrchr(int ac, char **av)
{
        (void) ac; 
        printf("%s\n", ft_strrchr(av[1], 's'));
        printf("%s\n", strrchr(av[1], 's'));
}

void    test_tolower(void)
{
        printf("%c\n", ft_tolower('C'));
        printf("%c\n", tolower('C'));
}

void    test_toupper(void)
{
        printf("%c\n", ft_toupper('c'));
        printf("%c\n", toupper('c'));
}

void     test_strnstr(int ac, char **av)
{
        (void) ac;
        printf("%s\n", strnstr(av[1], av[2], 7));
        printf("%s\n", ft_strnstr(av[1], av[2], 7));
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	test_isprint(ac, av);
	test_isdigit(ac, av);
	test_isalpha(ac, av);
	test_isalnum(ac, av);
	test_isascii(ac, av);
	test_strlen(ac, av);
	test_strlcat();
	test_strlcpy();
	test_strncmp(ac, av);
	test_atoi(ac, av);
	test_bzero();
	test_memset();
	test_calloc();
	test_memchr();
	test_memcmp();
	test_memcpy();
	test_memmove();
	test_strdup();
	test_strrchr(ac, av);
	test_tolower();
	test_toupper();
	test_strnstr(ac, av);
}
