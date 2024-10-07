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

#include "libft.h"
//*b is A pointer to the block of memory that you want to fill
// int c: The byte value you want to set in the memory block 
// char, as only one byte will be used from this value.
// size_t len: The number of bytes to fill, indicating how large the memory block is.

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (b);
}
