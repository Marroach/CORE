/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:21:18 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:21:18 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"
int     ft_isspace(int c)
{
    return (c == '\f' || c == '\n' || c == '\r' \
    || c == '\t' || c == '\v' || c == ' ');
}
int     ft_atoi(const char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (ft_isspace(*str))
        str++;
    if (*str == '-')
        sign = - 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
        num = num * 10 + *str++ - '0';
    return (num * sign);
}

int main ()
{
	char *test = "45854545200";
	int convert = ft_atoi(test);


	printf("test %d", convert);
	return 0;

}
