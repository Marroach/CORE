/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:22:35 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 15:07:28 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srccc;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = (char *)dst;
	srccc = (const char *)src;
	while (n--)
		dstc[n] = srccc[n];
	return (dst);
}

// #include <string.h>
// int  main()
// {
//     const char *src = "Hello, World!";
//     char dest[20];


//     printf("before copy: %s\n", dest);

//     ft_memcpy(dest, src, strlen(src) + 1); // +1 to copy the null terminator
//     printf("after copy: %s\n", dest);
// }

