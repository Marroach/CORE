/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 16:12:18 by marisald          #+#    #+#             */
/*   Updated: 2024-10-07 16:12:18 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // For malloc
#include "libft.h"    // For ft_strdup (if needed)

static int	ft_numlen(long n)
{
	int		len;

	len = 0;
	if (n <= 0)  // Handle negative numbers and zero
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_fill_str(char *rtn, long nbr, int len)
{
	rtn[len] = '\0'; 
	if (nbr < 0)
	{
		rtn[0] = '-';
		nbr = -nbr;
	}
	while (--len >= 0)
	{
		if (rtn[len] == '-')
			break;
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtn;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	rtn = (char *)malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	return (ft_fill_str(rtn, nbr, len));
}
