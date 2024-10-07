#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"



static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char
	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}



int main(void)
{
    char *s1 = "  ---Hello, World!---  ";
    char *set = " -"; // Characters to trim (spaces and dashes in this case)

    char *trimmed_str = ft_strtrim(s1, set); // Call to ft_strtrim
    
    if (trimmed_str) // Check if memory allocation succeeded
    {
        printf("Original string: '%s'\n", s1);
        printf("Trimmed string: '%s'\n", trimmed_str);

        // Once done, free the allocated memory for the trimmed string
        free(trimmed_str);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}