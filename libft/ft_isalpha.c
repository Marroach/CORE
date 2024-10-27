/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:21:47 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:21:47 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

// #include <stdio.h>
// int main()
// {
// 	char test = 'a';
// 	char test2 = '2' ;
// 	char test3 = 'A';
	
// 	printf("Is this an alnum %d \n", ft_isalpha(test));
// 	printf("Is this an alnum %d \n", ft_isalpha(test2));
// 	printf("Is this an alnum %d \n", ft_isalpha(test3));
// }