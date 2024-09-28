/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 09:41:14 by marisald          #+#    #+#             */
/*   Updated: 2024-09-28 09:41:14 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

int		ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}



// int		ft_isalnum(int c)
// {
// 	return (ft_isalpha(c) || ft_isdigit(c));
// }

// int main()

// {
// int test = '_';

// int test1 = '5';
// int test2 = ' ';
// int test3 = 'A';
// printf("check  underscore %d \n", ft_isalnum(test));
// printf("check  number  %d\n", ft_isalnum(test1));
// printf("check space %d\n", ft_isalnum(test2));
// printf("check alpha %d\n", ft_isalnum(test3));
// }
