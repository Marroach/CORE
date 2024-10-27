/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:22:47 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 14:55:56 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t		i;

	i = -1;
	while (*(s + ++i))
		;
	return (i);
}

// int main()
// {

// 	char *strn = NULL;
// 	char *test = "qwerty";
// 	char *test = "1";
// printf("Lenth is %zu ft \n", ft_strlen(str));
// printf("Lenth is %lu libc \n", strlen(str));
// }