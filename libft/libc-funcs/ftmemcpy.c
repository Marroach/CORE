/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmemcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:22:35 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:22:35 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	ptr = dst;
	ptr2 = (char *)src;
	i = -1;
	while (++i < n)
		*(ptr + i) = *(ptr2 + i);
	return (dst);
}

int  main()
{
    const char *src = "Hello, World!";
    char dest[20];


    printf("before copy: %s\n", dest);

    ft_memcpy(dest, src, strlen(src) + 1); // +1 to copy the null terminator
    printf("after copy: %s\n", dest);
}

