/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:22:19 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:22:19 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

int     ft_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int     ft_tolower(int c)
{
    if (ft_islower(c))
        return (c = c - 32);
    return (c);
}

int main ()
{
	char test = 'a';

printf("Testing %c", ft_tolower(test) );

return 0;
}