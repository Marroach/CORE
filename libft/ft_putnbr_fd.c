/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 12:38:25 by marisald          #+#    #+#             */
/*   Updated: 2024-10-10 12:38:25 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

	void	ft_putnbr_fd(int n, int fd)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n %= 1000000000;
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
