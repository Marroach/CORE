/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 12:38:47 by marisald          #+#    #+#             */
/*   Updated: 2024-10-10 12:38:47 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*rtn;
	size_t	len;

	len = ft_strlen(s1) + 1;
	rtn = malloc(sizeof(char) * len);
	if (!rtn)
		return (0);
	rtn = ft_memcpy(rtn, s1, len);
	return (rtn);
}

// int main ()
// {
// char *str = "C0py tH1s $tring";
// char *test1 = NULL;

// printf("%s \n", ft_strdup(str));
// printf("%s \n", strdup(str));

// printf("%s \n", ft_strdup(test1));
// printf("%s \n", strdup(test1));

// }