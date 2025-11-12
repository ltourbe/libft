/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltourbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:56:48 by ltourbe           #+#    #+#             */
/*   Updated: 2025/11/12 16:29:03 by ltourbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 
#include <bsd/string.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/*
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
	char	dest[6] = "Hello";
	char	dest1[6] = "Hello";
	char	src[] = "World";
	char	src1[] = "World";
	size_t	r = ft_strlcat(dest, src, 10);
	size_t	r1 = strlcat(dest1, src1, 10);

	printf("dest = \"%s\", return = %zu\n", dest, r);
	printf("dest = \"%s\", return = %zu\n", dest1, r1);
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
	(void) ac;
	printf("%d\n", ft_strncmp(av[1], av[2], 4));
	printf("%d\n", strncmp(av[1], av[2], 4));
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
        char    src[] = "123456789";
        char	src1[] = "123456789";
        char	srcc[] = "abcdef";
	char	srcc1[] = "abcdef";

	ft_memmove(src + 2, src, 5);
        printf("Test 3 : %s\n", src);
        memmove(src1 + 2, src1, 5);
        printf("Test 3 : %s\n", src1);
	ft_memmove(srcc, srcc + 2, 4);
        printf("Test 4 : %s\n", srcc);
        memmove(srcc1, srcc1 + 2, 4);
        printf("Test 4 : %s\n", srcc1);

}

void	test_strdup(void)
{
   char *string = "a\nb\tc";
   char *newstr = ft_strdup(string);
   char *string1 = "a\nb\tc";
   char *newstr1 = strdup(string1);

   printf("dup = \"%s\"\n", newstr);
   printf("dup = \"%s\"\n", newstr1);
   free(newstr);
   free(newstr1);
}

void	test_strchr(int ac, char **av)
{
	const char	*str;
	char	*c;
	char	*res;

	str = av[1];
	c = av[2][0];
	res = ft_strchr(str, c);
	if (ac != 3);
	{
		printf("Il manque un argument");
		return ;
	}
	if (result != NULL)
		printf("Caractere '%c' trouve a partir de: \"%s\"\n", c, res);
	else
		printf("Caractere '%c' non trouve dans: \"%s\"\n", c, str);
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

void    test_strnstr(int ac, char **av)
{
        (void) ac;
        printf("%s\n", strnstr(av[1], av[2], 7));
        printf("%s\n", ft_strnstr(av[1], av[2], 7));
}

void	test_substr(void)
{
        char *s = "Hello, world!";
        char *sub = ft_substr(s, 7, 5);
	printf("sub = \"%s\"\n", sub);
	free(sub);
}

void     test_strjoin(int ac, char **av)
{
        (void) ac;
        printf("%s\n", ft_strjoin(av[1], av[2]));
}

void	test_strtrim(int ac, char **av)
{
        (void) ac; 
        printf("%s\n", ft_strtrim(av[1], av[2]));
}
*/
void	test_split(int ac, char **av)
{
        char    **result;
        int     i;  

        (void) ac; 
        result = ft_split(av[1], *av[2]);
        i = 0;
        while (result && result[i])
        {
               // printf("%s\n", result[i]);
                printf("Dernier = %p\n", result[2]);
                i++;
        }
}
/*
void	test_itoa(int ac, char **av)
{
        (void) ac; 
        printf("%s\n", ft_itoa(atoi(av[1])));
}

void	test_strmapi(int ac, char **av)
{
        char    *str;

        (void) ac;
        str = ft_strmapi(av[1], *to_upper);
        printf("%s\n", str);
}

void	test_striteri(int ac, char **av)
{
        (void) ac;
        ft_striteri(av[1], to_upper);
        printf("%s\n", av[1]);
}

void     test_putchar_fd(int ac, char **av)
{
        (void) ac;
        ft_putchar_fd(*av[1], atoi(av[2]));
}

void     test_putstr_fd(int ac, char **av)
{
        (void) ac;
        ft_putstr_fd(av[1], atoi(av[2]));
}

void     test_putendl_fd(int ac, char **av)
{
        (void) ac; 
        ft_putendl_fd(av[1], atoi(av[2]));
}

void	test_putnbr_fd(int ac, char **av)
{
        (void) ac;
        ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
}
*/
int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
/*	test_isprint(ac, av);
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
	test_strchr(ac, av);
	test_strrchr(ac, av);
	test_tolower();
	test_toupper();
	test_strnstr(ac, av);
	test_substr();
	test_strjoin(ac, av);
	test_strtrim(ac, av);
*/	test_split(ac, av);
/*	test_itoa(ac, av);
	test_strmapi(ac, av);
	test_striteri(ac, av);
	test_putchar_fd(ac, av);
	test_putstr_fd(ac, av);
	test_putendl_fd(ac, av);
	test_putnbr_fd(ac, av);
*/}
