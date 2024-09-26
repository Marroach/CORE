/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:22:16 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:22:16 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

int     ft_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int     ft_tolower(int c)
{
    if (ft_isupper(c))
        return (c = c + 32);
    return (c);
}

int main ()
{
	char test = 'A';

printf("Testing %c", ft_tolower(test) );

return 0;
}