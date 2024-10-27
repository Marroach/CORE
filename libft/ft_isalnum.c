/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:41:14 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 14:16:21 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)

{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// int main()
// {
// 	char test = 'a';
// 	char test2 = '2' ;
// 	char test3 = 'z';
	
// 	printf("Is this an alnum %d \n", ft_isalnum(test));
// 	printf("Is this an alnum %d \n", ft_isalnum(test2));
// 	printf("Is this an alnum %d \n", ft_isalnum(test3));
// }