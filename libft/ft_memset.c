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

#include <stdlib.h>  // For malloc
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = (unsigned char *)b;  // Cast to unsigned char to match standard behavior
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;  // Cast 'c' to unsigned char to ensure only the lower byte is used
		i++;
	}
	return (b);
}
