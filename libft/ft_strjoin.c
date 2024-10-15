/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 12:38:59 by marisald          #+#    #+#             */
/*   Updated: 2024-10-10 12:38:59 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

#include <stdlib.h>  // For malloc
#include <string.h>  // For strlen

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jntstr;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)  // If both are NULL, return NULL
		return (NULL);

	// Calculate lengths of the strings
	len1 = (s1) ? strlen(s1) : 0;  // Use strlen only if s1 is not NULL
	len2 = (s2) ? strlen(s2) : 0;  // Use strlen only if s2 is not NULL

	// Allocate memory for the joined string
	jntstr = (char *)malloc(sizeof(char) * (len1 + len2 + 1)); // +1 for the null terminator
	if (!jntstr)
		return (NULL);

	// Copy first string into jntstr
	i = 0;
	while (i < len1)
	{
		jntstr[i] = s1[i];
		i++;
	}

	// Copy second string into jntstr
	j = 0;
	while (j < len2)
	{
		jntstr[i++] = s2[j];
		j++;
	}

	jntstr[i] = '\0';  // Null-terminate the new string
	return (jntstr);
}

// int main(void)
// {
//     char *str1 = "Hello, ";
//     char *str2 = "World!";
//         printf("Joint String %s", ft_strjoin(str1, str2));
//         // free(jntstr); // Don't forget to free the allocated memory
//     return 0;}