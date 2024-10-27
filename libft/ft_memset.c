/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:22:43 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 18:13:13 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h> 
#include "libft.h"
#include <stdio.h> 
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char buff1 [10];
// 	char buff2 [10];

// ft_bzero(buff1, 10);
// ft_bzero(buff2, 10);
// 	 // Initialize the entire buffers with bzero to avoid junk values
// memset(buff1, 'x', sizeof(char) * 5);
// ft_memset(buff2, 'x', sizeof(char) * 5);



// //test1
// int i = 0;
// printf("Memeset test\n");
// while (i < 10)
// {
// 	printf("%c", buff1[i]);
// 	i++;
// }
// printf("\n");

// printf("FT Memeset test\n");
// i = 3;
// while (i < 10)
// {
// 	printf("%c", buff2[i]);
// 	i++;
// }
// printf("\n");

// 	return 0;
// }
