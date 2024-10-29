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
#include <string.h>
#include "libft.h"
#include <stdlib.h> 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	else if (len > str_len - start)
		len = str_len - start;
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	newstr[len] = '\0';
	while (len--)
		newstr[len] = s[start + len];
	return (newstr);
}
