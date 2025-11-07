#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int	i;

	s2 = malloc(strlen(s1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   char	*string1 = "this is a copy";
   char	*newstr1;

   newstr = ft_strdup(string);
   printf("The new string is: %s\n", newstr);
   newstr1 = strdup(string1);
   printf("The new string is: %s\n", newstr1);
}
