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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_memory(const char *label, const char *ptr, size_t size) {
    printf("%s: ", label);
    for (size_t i = 0; i < size; i++) {
        printf("%02x ", (unsigned char)ptr[i]);
    }
    printf("\n");
}

int main() {
    char src[] = "Hell0";
    char dst1[50];
    char dst2[50];
    
    // Initialize destination buffers
    ft_memset(dst1, 0, sizeof(dst1));
    ft_memset(dst2, 0, sizeof(dst2));
    
    memcpy(dst1, src, strlen(src) + 1);  
    
    ft_memcpy(dst2, src, strlen(src) + 1);
    
    print_memory("memcpy result", dst1, strlen(src) + 1);
    print_memory("ft_memcpy result", dst2, strlen(src) + 1);
    
}