/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:33:23 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 14:58:09 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)

{
	return (c >= 0 && c < 128);
}

// #include <stdio.h>

// int main()
// {
// 	int test = 65;

// 	printf ("%d ", ft_isascii(test));
// }