/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 10:33:41 by marisald          #+#    #+#             */
/*   Updated: 2024-09-28 10:33:41 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	int		ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) ? c : 0);
}

// #include <stdio.h>
// int	main()
// {
// int test = ' ';
// int test1 = 65;
// int test2 = '0';
// 	printf("%d", ft_isprint(test));
// 	printf("\n%d", ft_isprint(test1));
// 	printf("\n%d", ft_isprint(test2));
// }