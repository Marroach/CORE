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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*jntstr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	jntstr = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s1) + 1));
	if (!jntstr)
		return (NULL);
	while (s1[i])
	{
		jntstr[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		jntstr[j++] = s2[i];
		i++;
	}
	jntstr[j] = 0;
	return (jntstr);
}

// int main(void)
// {
//     char *str1 = "Hello, ";
//     char *str2 = "World!";
//         printf("Joint String %s", ft_strjoin(str1, str2));
//         // free(jntstr); // Don't forget to free the allocated memory
//     return 0;}