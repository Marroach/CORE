/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 15:58:52 by marisald          #+#    #+#             */
/*   Updated: 2024-10-07 15:58:52 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdint.h>
#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (char *)malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ft_memset(ptr, 0, size * nmemb));
}

