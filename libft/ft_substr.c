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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	newstr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			newstr[j] = s[i];
			j++;
		}
		i++;
	}
	newstr[j] = 0;
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
