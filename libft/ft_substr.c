/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 12:39:35 by marisald          #+#    #+#             */
/*   Updated: 2024-10-10 12:39:35 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>  // For malloc
#include <string.h>  // For strlen

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	str_len;

	if (!s)
		return (NULL);

	str_len = strlen(s);  // Get the length of the input string

	// If start is beyond the string length, return an empty string
	if (start >= str_len)
	{
		newstr = malloc(1);  // Allocate memory for an empty string
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';  // Empty string
		return (newstr);
	}

	// Adjust len if it exceeds the remaining part of the string
	if (len > str_len - start)
		len = str_len - start;

	// Allocate memory for the substring + null terminator
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);

	// Copy the substring from the original string
	i = 0;
	while (i < len)
	{
		newstr[i] = s[start + i];
		i++;
	}
	newstr[i] = '\0';  // Null-terminate the new string

	return (newstr);
}


// int main(void)
// {
//     char *str = "Hello, World!";
//     char *sub;

//     sub = ft_substr(str, 7, 5);
//     if (sub)
//     {
//         printf("Substring: %s\n", sub);
//         free(sub); // Don't forget to free the allocated memory
//     }

//     return 0;
// }
